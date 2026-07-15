#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SkillCounterItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_274386B6ECA5E606_METHOD_1_20649D79497C5001_OFFSET UNITYSDK_OFFSET(0x17044910)
#define CLASS_1_274386B6ECA5E606_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x17044810)
#define CLASS_1_274386B6ECA5E606_METHOD_1_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0x17044BB0)
#define CLASS_1_274386B6ECA5E606_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170447C0)
#define CLASS_1_274386B6ECA5E606_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET UNITYSDK_OFFSET(0x170446A0)
#define CLASS_1_274386B6ECA5E606__CTOR_OFFSET UNITYSDK_OFFSET(0x17044C70)

inline static constexpr unsigned int Class_1_274386B6ECA5E606_TypeDefinitionIndex = 69104;

class Class_1_274386B6ECA5E606 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::Client::PrefabLoadMeta* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::SkillCounterItem*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274386B6ECA5E606__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6F4FD7AF7C4C2DC(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_274386B6ECA5E606_METHOD_1_E6F4FD7AF7C4C2DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274386B6ECA5E606_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_274386B6ECA5E606_METHOD_1_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_20649D79497C5001(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_274386B6ECA5E606_METHOD_1_20649D79497C5001_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_274386B6ECA5E606_METHOD_1_7EE99EE6AA394745_OFFSET))(this, a1);
	}
};
