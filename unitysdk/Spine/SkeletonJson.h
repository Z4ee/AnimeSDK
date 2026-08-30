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

#define SPINE_SKELETONJSON_FINDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x16086FF0)
#define SPINE_SKELETONJSON_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x16086C50)
#define SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1609AE60)
#define SPINE_SKELETONJSON_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x16086A20)
#define SPINE_SKELETONJSON_GETINTARRAY_OFFSET UNITYSDK_OFFSET(0x1609B150)
#define SPINE_SKELETONJSON_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1609B330)
#define SPINE_SKELETONJSON_GETINT_OFFSET UNITYSDK_OFFSET(0x16086EA0)
#define SPINE_SKELETONJSON_GETSTRING_OFFSET UNITYSDK_OFFSET(0x16086B70)
#define SPINE_SKELETONJSON_READANIMATION_OFFSET UNITYSDK_OFFSET(0x16088780)
#define SPINE_SKELETONJSON_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16087140)
#define SPINE_SKELETONJSON_READCURVE_OFFSET UNITYSDK_OFFSET(0x1609B4D0)
#define SPINE_SKELETONJSON_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1609A7B0)
#define SPINE_SKELETONJSON_READSKELETONDATA_1_OFFSET UNITYSDK_OFFSET(0x1607E150)
#define SPINE_SKELETONJSON_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1607DFD0)
#define SPINE_SKELETONJSON_READTIMELINE_1_OFFSET UNITYSDK_OFFSET(0x1609BD70)
#define SPINE_SKELETONJSON_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x1609B8E0)
#define SPINE_SKELETONJSON_READVERTICES_OFFSET UNITYSDK_OFFSET(0x1609A8A0)
#define SPINE_SKELETONJSON_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1609C280)
#define SPINE_SKELETONJSON_TOCOLOR_OFFSET UNITYSDK_OFFSET(0x16086DA0)
#define SPINE_SKELETONJSON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1607DFC0)
#define SPINE_SKELETONJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1607DF40)

namespace Spine
{
	inline static constexpr unsigned int SkeletonJson_TypeDefinitionIndex = 38396;

	class SkeletonJson : public ::Spine::SkeletonLoader
	{
	public:
		::System::Void _ctor(::Spine::AttachmentLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::Spine::Atlas*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON__CTOR_1_OFFSET))(this, a1);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* a1)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_OFFSET))(this, a1);
		}

		::Spine::SkeletonData* ReadSkeletonData_1(::System::IO::TextReader* a1)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_1_OFFSET))(this, a1);
		}

		::Spine::Attachment* ReadAttachment(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::Spine::Skin* a2, ::System::Int32 a3, ::System::String* a4, ::Spine::SkeletonData* a5)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READATTACHMENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::Spine::Sequence* ReadSequence(::System::Object* a1)
		{
			return ((::Spine::Sequence*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSEQUENCE_OFFSET))(a1);
		}

		::System::Void ReadVertices(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::Spine::VertexAttachment* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::Spine::VertexAttachment*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READVERTICES_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FindSlotIndex(::Spine::SkeletonData* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::SkeletonData*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_FINDSLOTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void ReadAnimation(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2, ::Spine::SkeletonData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READANIMATION_OFFSET))(this, a1, a2, a3);
		}

		static ::Spine::Timeline* ReadTimeline(::System::Collections::Generic::List_1_Enumerator<::System::Object*>& a1, ::Spine::CurveTimeline1* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::Spine::Timeline*(*)(::System::Collections::Generic::List_1_Enumerator<::System::Object*>&, ::Spine::CurveTimeline1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Spine::Timeline* ReadTimeline_1(::System::Collections::Generic::List_1_Enumerator<::System::Object*>& a1, ::Spine::CurveTimeline2* a2, ::System::String* a3, ::System::String* a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::Spine::Timeline*(*)(::System::Collections::Generic::List_1_Enumerator<::System::Object*>&, ::Spine::CurveTimeline2*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 ReadCurve(::System::Object* a1, ::Spine::CurveTimeline* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
		{
			return ((::System::Int32(*)(::System::Object*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READCURVE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void SetBezier(::Spine::CurveTimeline* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12)
		{
			return ((::System::Void(*)(::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_SETBEZIER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::Il2CppArray<::System::Single>* GetFloatArray(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Int32>* GetIntArray(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINTARRAY_OFFSET))(a1, a2);
		}

		static ::System::Single GetFloat(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetInt(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetInt_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetBoolean(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETBOOLEAN_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetString(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ToColor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_TOCOLOR_OFFSET))(a1, a2, a3);
		}
	};
}
