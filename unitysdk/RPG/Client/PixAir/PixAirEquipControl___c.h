#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3BEF10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BEF50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_10_OFFSET UNITYSDK_OFFSET(0xC3BF020)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_4_OFFSET UNITYSDK_OFFSET(0xC3BEF60)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_7_OFFSET UNITYSDK_OFFSET(0xC3BEFC0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipControl___c_TypeDefinitionIndex = 73565;

	class PixAirEquipControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_10()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipControl___c_TypeDefinitionIndex)->GetStaticField(0x6B70);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipControl___c_TypeDefinitionIndex)->GetStaticField(0x6B78);
		}
		static ::RPG::Client::PixAir::PixAirEquipControl___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirEquipControl___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipControl___c_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_7()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipControl___c_TypeDefinitionIndex)->GetStaticField(0x6B88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__1_4(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_4_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__1_7(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_7_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__1_10(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_10_OFFSET))(this, a1);
		}
	};
}
