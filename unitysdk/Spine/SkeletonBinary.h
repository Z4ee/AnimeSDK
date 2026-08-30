#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/SkeletonLoader.h"
#include "unitysdk/Spine/TransformMode.h"

namespace Spine { class Animation; }
namespace Spine { class Atlas; }
namespace Spine { class Attachment; }
namespace Spine { class AttachmentLoader; }
namespace Spine { class CurveTimeline1; }
namespace Spine { class CurveTimeline2; }
namespace Spine { class CurveTimeline; }
namespace Spine { class Sequence; }
namespace Spine { class SkeletonBinary_SkeletonInput; }
namespace Spine { class SkeletonBinary_Vertices; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Timeline; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define SPINE_SKELETONBINARY_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F1180)
#define SPINE_SKELETONBINARY_READANIMATION_OFFSET UNITYSDK_OFFSET(0x1E5F2BA0)
#define SPINE_SKELETONBINARY_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E5FCCB0)
#define SPINE_SKELETONBINARY_READFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1E5FEA00)
#define SPINE_SKELETONBINARY_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E5FE0D0)
#define SPINE_SKELETONBINARY_READSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1E5FEAE0)
#define SPINE_SKELETONBINARY_READSKELETONDATA_1_OFFSET UNITYSDK_OFFSET(0x1E5EE5D0)
#define SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1E5EE440)
#define SPINE_SKELETONBINARY_READSKIN_OFFSET UNITYSDK_OFFSET(0x1E5F22C0)
#define SPINE_SKELETONBINARY_READTIMELINE_1_OFFSET UNITYSDK_OFFSET(0x1E5FF1B0)
#define SPINE_SKELETONBINARY_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x1E5FEE50)
#define SPINE_SKELETONBINARY_READVERTICES_OFFSET UNITYSDK_OFFSET(0x1E5FE1E0)
#define SPINE_SKELETONBINARY_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1E5FED40)
#define SPINE_SKELETONBINARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FF600)
#define SPINE_SKELETONBINARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5EE3A0)
#define SPINE_SKELETONBINARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5EE2A0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBinary_TypeDefinitionIndex = 38389;

	class SkeletonBinary : public ::Spine::SkeletonLoader
	{
	public:
		static ::Il2CppArray<::Spine::TransformMode>** StaticGet_TransformModeValues()
		{
			return (::Il2CppArray<::Spine::TransformMode>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonBinary_TypeDefinitionIndex)->GetStaticField(0x48F40);
		}
		// static const ::System::Int32 BONE_ROTATE = 0x0; // 0x0
		// static const ::System::Int32 BONE_TRANSLATE = 0x1; // 0x0
		// static const ::System::Int32 BONE_TRANSLATEX = 0x2; // 0x0
		// static const ::System::Int32 BONE_TRANSLATEY = 0x3; // 0x0
		// static const ::System::Int32 BONE_SCALE = 0x4; // 0x0
		// static const ::System::Int32 BONE_SCALEX = 0x5; // 0x0
		// static const ::System::Int32 BONE_SCALEY = 0x6; // 0x0
		// static const ::System::Int32 BONE_SHEAR = 0x7; // 0x0
		// static const ::System::Int32 BONE_SHEARX = 0x8; // 0x0
		// static const ::System::Int32 BONE_SHEARY = 0x9; // 0x0
		// static const ::System::Int32 SLOT_ATTACHMENT = 0x0; // 0x0
		// static const ::System::Int32 SLOT_RGBA = 0x1; // 0x0
		// static const ::System::Int32 SLOT_RGB = 0x2; // 0x0
		// static const ::System::Int32 SLOT_RGBA2 = 0x3; // 0x0
		// static const ::System::Int32 SLOT_RGB2 = 0x4; // 0x0
		// static const ::System::Int32 SLOT_ALPHA = 0x5; // 0x0
		// static const ::System::Int32 ATTACHMENT_DEFORM = 0x0; // 0x0
		// static const ::System::Int32 ATTACHMENT_SEQUENCE = 0x1; // 0x0
		// static const ::System::Int32 PATH_POSITION = 0x0; // 0x0
		// static const ::System::Int32 PATH_SPACING = 0x1; // 0x0
		// static const ::System::Int32 PATH_MIX = 0x2; // 0x0
		// static const ::System::Int32 CURVE_LINEAR = 0x0; // 0x0
		// static const ::System::Int32 CURVE_STEPPED = 0x1; // 0x0
		// static const ::System::Int32 CURVE_BEZIER = 0x2; // 0x0

		::System::Void _ctor(::Spine::AttachmentLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::Spine::Atlas*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY__CCTOR_OFFSET))();
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* a1)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET))(this, a1);
		}

		static ::System::String* GetVersionString(::System::IO::Stream* a1)
		{
			return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_GETVERSIONSTRING_OFFSET))(a1);
		}

		::Spine::SkeletonData* ReadSkeletonData_1(::System::IO::Stream* a1)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKELETONDATA_1_OFFSET))(this, a1);
		}

		::Spine::Skin* ReadSkin(::Spine::SkeletonBinary_SkeletonInput* a1, ::Spine::SkeletonData* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Spine::Skin*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::SkeletonData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKIN_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::Attachment* ReadAttachment(::Spine::SkeletonBinary_SkeletonInput* a1, ::Spine::SkeletonData* a2, ::Spine::Skin* a3, ::System::Int32 a4, ::System::String* a5, ::System::Boolean a6)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::SkeletonData*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READATTACHMENT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Spine::Sequence* ReadSequence(::Spine::SkeletonBinary_SkeletonInput* a1)
		{
			return ((::Spine::Sequence*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSEQUENCE_OFFSET))(this, a1);
		}

		::Spine::SkeletonBinary_Vertices* ReadVertices(::Spine::SkeletonBinary_SkeletonInput* a1, ::System::Int32 a2)
		{
			return ((::Spine::SkeletonBinary_Vertices*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READVERTICES_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Single>* ReadFloatArray(::Spine::SkeletonBinary_SkeletonInput* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READFLOATARRAY_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Int32>* ReadShortArray(::Spine::SkeletonBinary_SkeletonInput* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSHORTARRAY_OFFSET))(this, a1);
		}

		::Spine::Animation* ReadAnimation(::System::String* a1, ::Spine::SkeletonBinary_SkeletonInput* a2, ::Spine::SkeletonData* a3)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::System::String*, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::Spine::Timeline* ReadTimeline(::Spine::SkeletonBinary_SkeletonInput* a1, ::Spine::CurveTimeline1* a2, ::System::Single a3)
		{
			return ((::Spine::Timeline*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::CurveTimeline1*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READTIMELINE_OFFSET))(this, a1, a2, a3);
		}

		::Spine::Timeline* ReadTimeline_1(::Spine::SkeletonBinary_SkeletonInput* a1, ::Spine::CurveTimeline2* a2, ::System::Single a3)
		{
			return ((::Spine::Timeline*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::CurveTimeline2*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READTIMELINE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBezier(::Spine::SkeletonBinary_SkeletonInput* a1, ::Spine::CurveTimeline* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SETBEZIER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}
	};
}
