#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class FollowPointMapping; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A796F9ED23C6C673_CLEAR_OFFSET UNITYSDK_OFFSET(0x19AD5CC0)
#define CLASS_1_A796F9ED23C6C673_METHOD_1_2B32279AD66917FA_OFFSET UNITYSDK_OFFSET(0x19AD5D50)
#define CLASS_1_A796F9ED23C6C673_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x19AD5F20)
#define CLASS_1_A796F9ED23C6C673__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD6070)

inline static constexpr unsigned int Class_1_A796F9ED23C6C673_TypeDefinitionIndex = 68826;

class Class_1_A796F9ED23C6C673 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* NLIFDJHPHLP; // 0x10
	::RPG::Client::FollowPointMapping* CFIOFNEOCMI; // 0x18
	::System::String* IPKCFNKIDMB; // 0x20
	::UnityEngine::Transform* MCLLALGABAB; // 0x28
	::UnityEngine::Quaternion FICPPFFOIFB; // 0x30
	::System::Single IEHPFADHJFD; // 0x40
	::UnityEngine::Quaternion ANGPCKDKKIJ; // 0x44
	::System::Single PMHMEGEJDGP; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A796F9ED23C6C673__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A796F9ED23C6C673_CLEAR_OFFSET))(this);
	}

	static ::Class_1_A796F9ED23C6C673* Method_1_2B32279AD66917FA(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_1_A796F9ED23C6C673*(*)(::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A796F9ED23C6C673_METHOD_1_2B32279AD66917FA_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A796F9ED23C6C673_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}
};
