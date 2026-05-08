#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/SkeletonLoader.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"

namespace Spine { class Atlas; }
namespace Spine { class Attachment; }
namespace Spine { class AttachmentLoader; }
namespace Spine { class CurveTimeline1; }
namespace Spine { class CurveTimeline2; }
namespace Spine { class CurveTimeline; }
namespace Spine { class Sequence; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Timeline; }
namespace Spine { class VertexAttachment; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class TextReader; }

#define SPINE_SKELETONJSON_FINDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1B5BC000)
#define SPINE_SKELETONJSON_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1B5BBC50)
#define SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1B5CE340)
#define SPINE_SKELETONJSON_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1B5BBA80)
#define SPINE_SKELETONJSON_GETINTARRAY_OFFSET UNITYSDK_OFFSET(0x1B5CE5B0)
#define SPINE_SKELETONJSON_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1B5CE740)
#define SPINE_SKELETONJSON_GETINT_OFFSET UNITYSDK_OFFSET(0x1B5BBEF0)
#define SPINE_SKELETONJSON_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1B5BBBA0)
#define SPINE_SKELETONJSON_READANIMATION_OFFSET UNITYSDK_OFFSET(0x1B5BD2D0)
#define SPINE_SKELETONJSON_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1B5BC160)
#define SPINE_SKELETONJSON_READCURVE_OFFSET UNITYSDK_OFFSET(0x1B5CE890)
#define SPINE_SKELETONJSON_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1B5CDB50)
#define SPINE_SKELETONJSON_READSKELETONDATA_1_OFFSET UNITYSDK_OFFSET(0x1B5B3D90)
#define SPINE_SKELETONJSON_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1B5B3C50)
#define SPINE_SKELETONJSON_READTIMELINE_1_OFFSET UNITYSDK_OFFSET(0x1B5CEFA0)
#define SPINE_SKELETONJSON_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x1B5CEC60)
#define SPINE_SKELETONJSON_READVERTICES_OFFSET UNITYSDK_OFFSET(0x1B5CDC40)
#define SPINE_SKELETONJSON_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1B5CF3C0)
#define SPINE_SKELETONJSON_TOCOLOR_OFFSET UNITYSDK_OFFSET(0x1B5BBD60)
#define SPINE_SKELETONJSON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B5B3C40)
#define SPINE_SKELETONJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B3C30)

namespace Spine
{
	inline static constexpr unsigned int SkeletonJson_TypeDefinitionIndex = 31347;

	class SkeletonJson : public ::Spine::SkeletonLoader
	{
	public:
		::System::Void _ctor(::Spine::AttachmentLoader* attachmentLoader)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON__CTOR_OFFSET))(this, attachmentLoader);
		}

		::System::Void _ctor_1(::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON__CTOR_1_OFFSET))(this, atlasArray);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* path)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_OFFSET))(this, path);
		}

		::Spine::SkeletonData* ReadSkeletonData_1(::System::IO::TextReader* reader)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_1_OFFSET))(this, reader);
		}

		::Spine::Attachment* ReadAttachment(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::Spine::Skin* skin, ::System::Int32 slotIndex, ::System::String* name, ::Spine::SkeletonData* skeletonData)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READATTACHMENT_OFFSET))(this, map, skin, slotIndex, name, skeletonData);
		}

		static ::Spine::Sequence* ReadSequence(::System::Object* sequenceJson)
		{
			return ((::Spine::Sequence*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSEQUENCE_OFFSET))(sequenceJson);
		}

		::System::Void ReadVertices(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::Spine::VertexAttachment* attachment, ::System::Int32 verticesLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::Spine::VertexAttachment*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READVERTICES_OFFSET))(this, map, attachment, verticesLength);
		}

		::System::Int32 FindSlotIndex(::Spine::SkeletonData* skeletonData, ::System::String* slotName)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::SkeletonData*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_FINDSLOTINDEX_OFFSET))(this, skeletonData, slotName);
		}

		::System::Void ReadAnimation(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READANIMATION_OFFSET))(this, map, name, skeletonData);
		}

		static ::Spine::Timeline* ReadTimeline(::System::Collections::Generic::List_1_Enumerator<::System::Object*>& keyMapEnumerator, ::Spine::CurveTimeline1* timeline, ::System::Single defaultValue, ::System::Single scale)
		{
			return ((::Spine::Timeline*(*)(::System::Collections::Generic::List_1_Enumerator<::System::Object*>&, ::Spine::CurveTimeline1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_OFFSET))(keyMapEnumerator, timeline, defaultValue, scale);
		}

		static ::Spine::Timeline* ReadTimeline_1(::System::Collections::Generic::List_1_Enumerator<::System::Object*>& keyMapEnumerator, ::Spine::CurveTimeline2* timeline, ::System::String* name1, ::System::String* name2, ::System::Single defaultValue, ::System::Single scale)
		{
			return ((::Spine::Timeline*(*)(::System::Collections::Generic::List_1_Enumerator<::System::Object*>&, ::Spine::CurveTimeline2*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_1_OFFSET))(keyMapEnumerator, timeline, name1, name2, defaultValue, scale);
		}

		static ::System::Int32 ReadCurve(::System::Object* curve, ::Spine::CurveTimeline* timeline, ::System::Int32 bezier, ::System::Int32 frame, ::System::Int32 value, ::System::Single time1, ::System::Single time2, ::System::Single value1, ::System::Single value2, ::System::Single scale)
		{
			return ((::System::Int32(*)(::System::Object*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READCURVE_OFFSET))(curve, timeline, bezier, frame, value, time1, time2, value1, value2, scale);
		}

		static ::System::Void SetBezier(::Spine::CurveTimeline* timeline, ::System::Int32 frame, ::System::Int32 value, ::System::Int32 bezier, ::System::Single time1, ::System::Single value1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single time2, ::System::Single value2)
		{
			return ((::System::Void(*)(::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_SETBEZIER_OFFSET))(timeline, frame, value, bezier, time1, value1, cx1, cy1, cx2, cy2, time2, value2);
		}

		static ::Il2CppArray<::System::Single>* GetFloatArray(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Single scale)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET))(map, name, scale);
		}

		static ::Il2CppArray<::System::Int32>* GetIntArray(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINTARRAY_OFFSET))(map, name);
		}

		static ::System::Single GetFloat(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOAT_OFFSET))(map, name, defaultValue);
		}

		static ::System::Int32 GetInt(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_OFFSET))(map, name, defaultValue);
		}

		static ::System::Int32 GetInt_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_1_OFFSET))(map, name);
		}

		static ::System::Boolean GetBoolean(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETBOOLEAN_OFFSET))(map, name, defaultValue);
		}

		static ::System::String* GetString(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::String* defaultValue)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETSTRING_OFFSET))(map, name, defaultValue);
		}

		static ::System::Single ToColor(::System::String* hexString, ::System::Int32 colorIndex, ::System::Int32 expectedLength)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_TOCOLOR_OFFSET))(hexString, colorIndex, expectedLength);
		}
	};
}
