#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_62BCB4ACE7657825_METHOD_1_5F1AAB30023B6B5C_OFFSET UNITYSDK_OFFSET(0x8EAFE70)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8EAFC80)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x8EAFCD0)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8EB0090)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_D239755B0473B35B_OFFSET UNITYSDK_OFFSET(0x8EAFE00)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_D6AAAAFE543F79D6_OFFSET UNITYSDK_OFFSET(0x8EAFF60)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_E1AD50592A7CA482_OFFSET UNITYSDK_OFFSET(0x8EAFDB0)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_F3BD9FD13711D6CD_OFFSET UNITYSDK_OFFSET(0x8EB0040)
#define CLASS_1_62BCB4ACE7657825_METHOD_1_F42568C78BA1C288_OFFSET UNITYSDK_OFFSET(0x8EAFCE0)
#define CLASS_1_62BCB4ACE7657825__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB00E0)

inline static constexpr unsigned int Class_1_62BCB4ACE7657825_TypeDefinitionIndex = 57267;

class Class_1_62BCB4ACE7657825 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::RPG::Client::AttachPointMapping* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_F42568C78BA1C288(::UnityEngine::Transform* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_F42568C78BA1C288_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_E1AD50592A7CA482(::System::Int32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_E1AD50592A7CA482_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_D239755B0473B35B(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_D239755B0473B35B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3BD9FD13711D6CD(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_F3BD9FD13711D6CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_5F1AAB30023B6B5C(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_5F1AAB30023B6B5C_OFFSET))(this, a1);
	}

	static ::UnityEngine::Transform* Method_1_D6AAAAFE543F79D6(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62BCB4ACE7657825_METHOD_1_D6AAAAFE543F79D6_OFFSET))(a1, a2);
	}
};
