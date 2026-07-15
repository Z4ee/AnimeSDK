#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_817;
namespace RPG::Client { class GridFightGridMoveValidateResult; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x194FC590)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x194FCBC0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x194FCBB0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__DEFAULTREASON_OFFSET UNITYSDK_OFFSET(0x194FCAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_TypeDefinitionIndex = 61922;

	class GridFightGridOperationValidator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_817*>** StaticGet__Constraits()
		{
			return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_817*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGridOperationValidator_TypeDefinitionIndex)->GetStaticField(0x281F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightGridMoveValidateResult* Validate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightGridMoveValidateResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_VALIDATE_OFFSET))(this, a1, a2);
		}

		::System::String* _DefaultReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR__DEFAULTREASON_OFFSET))(this);
		}
	};
}
