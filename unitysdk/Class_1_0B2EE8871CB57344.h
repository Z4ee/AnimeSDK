#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_50BF4F6DB8616D8D.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/System/Object.h"

class Class_1_897DEFB492B79FA0;
namespace Spine { class Animation; }
namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonAnimation; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0B2EE8871CB57344_METHOD_1_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0x11750A20)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x117505A0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_54D7BFACB7EB197F_OFFSET UNITYSDK_OFFSET(0x117507F0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_67C2A1EEB4412208_OFFSET UNITYSDK_OFFSET(0x117504C0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_71E160A0FF1031DC_OFFSET UNITYSDK_OFFSET(0x11750AD0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_71F164751C06B076_OFFSET UNITYSDK_OFFSET(0x117501E0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_7C72F0C77B62203F_OFFSET UNITYSDK_OFFSET(0x11750460)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_8F1D3DCE7C3B9265_OFFSET UNITYSDK_OFFSET(0x11750DB0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_942A5729646507B9_OFFSET UNITYSDK_OFFSET(0x11750EA0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x11750260)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x117509D0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0x11750060)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11750C70)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_CA5DC148BF79E282_OFFSET UNITYSDK_OFFSET(0x11750CB0)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_E6F170679A3AE60B_OFFSET UNITYSDK_OFFSET(0x11750670)
#define CLASS_1_0B2EE8871CB57344_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x11750920)
#define CLASS_1_0B2EE8871CB57344__CTOR_OFFSET UNITYSDK_OFFSET(0x11750050)

inline static constexpr unsigned int Class_1_0B2EE8871CB57344_TypeDefinitionIndex = 40382;

class Class_1_0B2EE8871CB57344 : public ::System::Object
{
public:
	::Class_1_897DEFB492B79FA0* Field_1_5; // 0x10
	::Spine::Unity::SkeletonAnimation* Field_1_3; // 0x18
	::Spine::AnimationState* Field_1_4; // 0x20
	::UnityEngine::GameObject* Field_1_2; // 0x28
	::System::Action_2<::Class_1_0B2EE8871CB57344*, ::System::Boolean>* Field_1_6; // 0x30
	::Spine::Unity::UpdateTiming Field_1_0; // 0x38
	::Enum_3_50BF4F6DB8616D8D Field_1_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA446D4D3EBC6EEF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_BA446D4D3EBC6EEF_OFFSET))(this, a1);
	}

	::Spine::Animation* Method_1_71F164751C06B076(::System::String* a1)
	{
		return ((::Spine::Animation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_71F164751C06B076_OFFSET))(this, a1);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_1_7C72F0C77B62203F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_7C72F0C77B62203F_OFFSET))(this, a1);
	}

	::System::Void Method_1_67C2A1EEB4412208(::System::Action_2<::Class_1_0B2EE8871CB57344*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_0B2EE8871CB57344*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_67C2A1EEB4412208_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6F170679A3AE60B(::Spine::Unity::UpdateTiming a1)
	{
		return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_E6F170679A3AE60B_OFFSET))(this, a1);
	}

	::Spine::TrackEntry* Method_1_54D7BFACB7EB197F(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_54D7BFACB7EB197F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_295B0FA1282F1A6E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_295B0FA1282F1A6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_71E160A0FF1031DC(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_71E160A0FF1031DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Spine::TrackEntry* Method_1_CA5DC148BF79E282(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_CA5DC148BF79E282_OFFSET))(this, a1, a2, a3);
	}

	::Spine::TrackEntry* Method_1_8F1D3DCE7C3B9265(::System::Single a1, ::System::Int32 a2)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_8F1D3DCE7C3B9265_OFFSET))(this, a1, a2);
	}

	::Spine::TrackEntry* Method_1_942A5729646507B9(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
	{
		return ((::Spine::TrackEntry*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B2EE8871CB57344_METHOD_1_942A5729646507B9_OFFSET))(this, a1, a2, a3);
	}
};
