#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1261EBB0)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1261EBF0)
#define MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__ONPROCESS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1261EC00)

namespace MoleMole
{
	inline static constexpr unsigned int GetAccessoryOfLockedSkin___c_TypeDefinitionIndex = 55071;

	class GetAccessoryOfLockedSkin___c : public ::System::Object
	{
	public:
		static ::MoleMole::GetAccessoryOfLockedSkin___c** StaticGet___9()
		{
			return (::MoleMole::GetAccessoryOfLockedSkin___c**)Il2CppClass::FromTypeDefinitionIndex(GetAccessoryOfLockedSkin___c_TypeDefinitionIndex)->GetStaticField(0x307B0);
		}
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__5_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GetAccessoryOfLockedSkin___c_TypeDefinitionIndex)->GetStaticField(0x307B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__CTOR_OFFSET))(this);
		}

		::System::String* _OnProcess_b__5_0(::System::Int32 s)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETACCESSORYOFLOCKEDSKIN___C__ONPROCESS_B__5_0_OFFSET))(this, s);
		}
	};
}
