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

#define SPINE_SKELETONBINARY_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x183B4770)
#define SPINE_SKELETONBINARY_READANIMATION_OFFSET UNITYSDK_OFFSET(0x183B5C50)
#define SPINE_SKELETONBINARY_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x183BDE10)
#define SPINE_SKELETONBINARY_READFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x183BF5F0)
#define SPINE_SKELETONBINARY_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x183BEDD0)
#define SPINE_SKELETONBINARY_READSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x183BF6F0)
#define SPINE_SKELETONBINARY_READSKELETONDATA_1_OFFSET UNITYSDK_OFFSET(0x183B2620)
#define SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x183B24E0)
#define SPINE_SKELETONBINARY_READSKIN_OFFSET UNITYSDK_OFFSET(0x183B5490)
#define SPINE_SKELETONBINARY_READTIMELINE_1_OFFSET UNITYSDK_OFFSET(0x183BFC10)
#define SPINE_SKELETONBINARY_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x183BF960)
#define SPINE_SKELETONBINARY_READVERTICES_OFFSET UNITYSDK_OFFSET(0x183BEE70)
#define SPINE_SKELETONBINARY_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x183BF850)
#define SPINE_SKELETONBINARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x183BFF50)
#define SPINE_SKELETONBINARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183B2440)
#define SPINE_SKELETONBINARY__CTOR_OFFSET UNITYSDK_OFFSET(0x183B2340)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBinary_TypeDefinitionIndex = 30728;

	class SkeletonBinary : public ::Spine::SkeletonLoader
	{
	public:
		static ::Il2CppArray<::Spine::TransformMode>** StaticGet_TransformModeValues()
		{
			return (::Il2CppArray<::Spine::TransformMode>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonBinary_TypeDefinitionIndex)->GetStaticField(0x30900);
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

		::System::Void _ctor(::Spine::AttachmentLoader* attachmentLoader)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY__CTOR_OFFSET))(this, attachmentLoader);
		}

		::System::Void _ctor_1(::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY__CTOR_1_OFFSET))(this, atlasArray);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY__CCTOR_OFFSET))();
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* path)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKELETONDATA_OFFSET))(this, path);
		}

		static ::System::String* GetVersionString(::System::IO::Stream* file)
		{
			return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_GETVERSIONSTRING_OFFSET))(file);
		}

		::Spine::SkeletonData* ReadSkeletonData_1(::System::IO::Stream* file)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKELETONDATA_1_OFFSET))(this, file);
		}

		::Spine::Skin* ReadSkin(::Spine::SkeletonBinary_SkeletonInput* input, ::Spine::SkeletonData* skeletonData, ::System::Boolean defaultSkin, ::System::Boolean nonessential)
		{
			return ((::Spine::Skin*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::SkeletonData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSKIN_OFFSET))(this, input, skeletonData, defaultSkin, nonessential);
		}

		::Spine::Attachment* ReadAttachment(::Spine::SkeletonBinary_SkeletonInput* input, ::Spine::SkeletonData* skeletonData, ::Spine::Skin* skin, ::System::Int32 slotIndex, ::System::String* attachmentName, ::System::Boolean nonessential)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::SkeletonData*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READATTACHMENT_OFFSET))(this, input, skeletonData, skin, slotIndex, attachmentName, nonessential);
		}

		::Spine::Sequence* ReadSequence(::Spine::SkeletonBinary_SkeletonInput* input)
		{
			return ((::Spine::Sequence*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSEQUENCE_OFFSET))(this, input);
		}

		::Spine::SkeletonBinary_Vertices* ReadVertices(::Spine::SkeletonBinary_SkeletonInput* input, ::System::Int32 vertexCount)
		{
			return ((::Spine::SkeletonBinary_Vertices*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READVERTICES_OFFSET))(this, input, vertexCount);
		}

		::Il2CppArray<::System::Single>* ReadFloatArray(::Spine::SkeletonBinary_SkeletonInput* input, ::System::Int32 n, ::System::Single scale)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READFLOATARRAY_OFFSET))(this, input, n, scale);
		}

		::Il2CppArray<::System::Int32>* ReadShortArray(::Spine::SkeletonBinary_SkeletonInput* input)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READSHORTARRAY_OFFSET))(this, input);
		}

		::Spine::Animation* ReadAnimation(::System::String* name, ::Spine::SkeletonBinary_SkeletonInput* input, ::Spine::SkeletonData* skeletonData)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::System::String*, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READANIMATION_OFFSET))(this, name, input, skeletonData);
		}

		::Spine::Timeline* ReadTimeline(::Spine::SkeletonBinary_SkeletonInput* input, ::Spine::CurveTimeline1* timeline, ::System::Single scale)
		{
			return ((::Spine::Timeline*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::CurveTimeline1*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READTIMELINE_OFFSET))(this, input, timeline, scale);
		}

		::Spine::Timeline* ReadTimeline_1(::Spine::SkeletonBinary_SkeletonInput* input, ::Spine::CurveTimeline2* timeline, ::System::Single scale)
		{
			return ((::Spine::Timeline*(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::CurveTimeline2*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_READTIMELINE_1_OFFSET))(this, input, timeline, scale);
		}

		::System::Void SetBezier(::Spine::SkeletonBinary_SkeletonInput* input, ::Spine::CurveTimeline* timeline, ::System::Int32 bezier, ::System::Int32 frame, ::System::Int32 value, ::System::Single time1, ::System::Single time2, ::System::Single value1, ::System::Single value2, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonBinary_SkeletonInput*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBINARY_SETBEZIER_OFFSET))(this, input, timeline, bezier, frame, value, time1, time2, value1, value2, scale);
		}
	};
}
