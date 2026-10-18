#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_EF4C1E7E02CA3E3B;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BA8989DC4F28C71D_METHOD_2_F26684535B98526F_OFFSET UNITYSDK_OFFSET(0x15B4F6B0)
#define CLASS_2_BA8989DC4F28C71D_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15B4F8B0)
#define CLASS_2_BA8989DC4F28C71D_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B4F210)
#define CLASS_2_BA8989DC4F28C71D__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4F910)

inline static constexpr unsigned int Class_2_BA8989DC4F28C71D_TypeDefinitionIndex = 74968;

class Class_2_BA8989DC4F28C71D : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
	::UnityEngine::Transform* OAKPFPKNNBI; // 0x18
	::UnityEngine::Transform* MFFPFAAMKLM; // 0x20
	::UnityEngine::Vector3 AELNGFIBDLB; // 0x28
	::UnityEngine::Vector3 CFOPAPAGLDK; // 0x34
	::System::Boolean BFDJMNFOMLL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA8989DC4F28C71D__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BA8989DC4F28C71D_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_BA8989DC4F28C71D_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_F26684535B98526F(::UnityEngine::Transform* a1, ::Class_2_EF4C1E7E02CA3E3B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_2_EF4C1E7E02CA3E3B*))((::PBYTE)hIl2Cpp + CLASS_2_BA8989DC4F28C71D_METHOD_2_F26684535B98526F_OFFSET))(this, a1, a2);
	}
};
