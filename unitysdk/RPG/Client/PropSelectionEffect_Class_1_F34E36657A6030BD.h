#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PropSelectionEffect; }

#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF218A0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAF218E0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_34EEB7902D04C0FD_OFFSET UNITYSDK_OFFSET(0xAF21990)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_A6EE3276D5055243_OFFSET UNITYSDK_OFFSET(0xAF21940)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAF219E0)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_E2D0B9E78ACBE575_OFFSET UNITYSDK_OFFSET(0xAF21A20)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF21A30)
#define RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD__CTOR_OFFSET UNITYSDK_OFFSET(0xAF21890)

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionEffect_Class_1_F34E36657A6030BD_TypeDefinitionIndex = 55568;

	class PropSelectionEffect_Class_1_F34E36657A6030BD : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Field_1_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropSelectionEffect_Class_1_F34E36657A6030BD_TypeDefinitionIndex)->GetStaticField(0x50F0);
		}
		::RPG::Client::PropSelectionEffect* Field_1_0; // 0x10
		::RPG::Client::PropSelectionState Field_1_1; // 0x18
		::RPG::Client::PropSelectionState Field_1_2; // 0x1C

		::System::Void _ctor(::RPG::Client::PropSelectionEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_1_A6EE3276D5055243(::RPG::Client::PropSelectionState a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_A6EE3276D5055243_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_34EEB7902D04C0FD(::RPG::Client::PropSelectionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_34EEB7902D04C0FD_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::RPG::Client::PropSelectionState Method_1_E2D0B9E78ACBE575()
		{
			return ((::RPG::Client::PropSelectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPSELECTIONEFFECT_CLASS_1_F34E36657A6030BD_METHOD_1_E2D0B9E78ACBE575_OFFSET))(this);
		}
	};
}
