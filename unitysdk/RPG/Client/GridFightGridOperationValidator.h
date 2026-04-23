#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_731;
namespace RPG::Client { class GridFightGridMoveValidateResult; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA4E9830)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4E9DC0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E9DB0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__DEFAULTREASON_OFFSET UNITYSDK_OFFSET(0xA4E9CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_TypeDefinitionIndex = 59696;

	class GridFightGridOperationValidator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_731*>** StaticGet__Constraits()
		{
			return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_731*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGridOperationValidator_TypeDefinitionIndex)->GetStaticField(0x14B60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGridMoveValidateResult* Validate(::System::UInt32 startPosIndex, ::System::UInt32 endPosIndex)
		{
			return ((::RPG::Client::GridFightGridMoveValidateResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_VALIDATE_OFFSET))(this, startPosIndex, endPosIndex);
		}

		::System::String* _DefaultReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__DEFAULTREASON_OFFSET))(this);
		}
	};
}
