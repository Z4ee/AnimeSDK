#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_577C41D199C6C68E;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_MVVMBINDINGDEVCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE9277A0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_MVVMBINDINGDEVCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE9287E0)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int MVVMBindingDevControl_TypeDefinitionIndex = 50371;

	class MVVMBindingDevControl : public ::Sofa::BaseSofaControl_1<::Class_1_577C41D199C6C68E*>
	{
	public:
		::RPG::Client::PrefabLoadMeta* _FirstRedDot; // 0x58
		::RPG::Client::AnimatorButton* _FirstButton; // 0x60
		::RPG::Client::PrefabLoadMeta* _SecondRedDot; // 0x68
		::RPG::Client::AnimatorButton* _SecondButton; // 0x70
		::RPG::Client::PrefabLoadMeta* _ThirdRedDot; // 0x78
		::RPG::Client::AnimatorButton* _ThirdButton; // 0x80
		::RPG::Client::PrefabLoadMeta* _FourthRedDot; // 0x88
		::RPG::Client::AnimatorButton* _FourthButton; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_MVVMBINDINGDEVCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_577C41D199C6C68E*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_577C41D199C6C68E*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_MVVMBINDINGDEVCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
