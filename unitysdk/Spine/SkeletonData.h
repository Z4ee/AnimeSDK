#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Animation; }
namespace Spine { class BoneData; }
namespace Spine { class EventData; }
namespace Spine { class IkConstraintData; }
namespace Spine { class PathConstraintData; }
namespace Spine { class Skin; }
namespace Spine { class SlotData; }
namespace Spine { class TransformConstraintData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_SKELETONDATA_FINDANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC4B4F0)
#define SPINE_SKELETONDATA_FINDBONE_OFFSET UNITYSDK_OFFSET(0x1AC7A2E0)
#define SPINE_SKELETONDATA_FINDEVENT_OFFSET UNITYSDK_OFFSET(0x1AC7A3F0)
#define SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1AC7A540)
#define SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1AC7A760)
#define SPINE_SKELETONDATA_FINDSKIN_OFFSET UNITYSDK_OFFSET(0x1AC673D0)
#define SPINE_SKELETONDATA_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x1AC67820)
#define SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1AC7A650)
#define SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1AC7A140)
#define SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1AC7A2A0)
#define SPINE_SKELETONDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1AC7A0C0)
#define SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1AC7A100)
#define SPINE_SKELETONDATA_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1AC7A120)
#define SPINE_SKELETONDATA_GET_FPS_OFFSET UNITYSDK_OFFSET(0x1AC7A2C0)
#define SPINE_SKELETONDATA_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1AC7A260)
#define SPINE_SKELETONDATA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC7A220)
#define SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AC7A160)
#define SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x1AC7A280)
#define SPINE_SKELETONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC7A0A0)
#define SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AC7A1A0)
#define SPINE_SKELETONDATA_GET_SKINS_OFFSET UNITYSDK_OFFSET(0x1AC7A0E0)
#define SPINE_SKELETONDATA_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1AC7A0D0)
#define SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AC7A180)
#define SPINE_SKELETONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AC7A240)
#define SPINE_SKELETONDATA_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC7A200)
#define SPINE_SKELETONDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1AC7A1C0)
#define SPINE_SKELETONDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1AC7A1E0)
#define SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1AC7A150)
#define SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1AC7A2B0)
#define SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1AC7A110)
#define SPINE_SKELETONDATA_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1AC7A130)
#define SPINE_SKELETONDATA_SET_FPS_OFFSET UNITYSDK_OFFSET(0x1AC7A2D0)
#define SPINE_SKELETONDATA_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1AC7A270)
#define SPINE_SKELETONDATA_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC7A230)
#define SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AC7A170)
#define SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x1AC7A290)
#define SPINE_SKELETONDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC7A0B0)
#define SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AC7A1B0)
#define SPINE_SKELETONDATA_SET_SKINS_OFFSET UNITYSDK_OFFSET(0x1AC7A0F0)
#define SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AC7A190)
#define SPINE_SKELETONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AC7A250)
#define SPINE_SKELETONDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC7A210)
#define SPINE_SKELETONDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1AC7A1D0)
#define SPINE_SKELETONDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1AC7A1F0)
#define SPINE_SKELETONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC7A870)
#define SPINE_SKELETONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6B220)

namespace Spine
{
	inline static constexpr unsigned int SkeletonData_TypeDefinitionIndex = 36754;

	class SkeletonData : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::SlotData*>* slots; // 0x10
		::System::String* hash; // 0x18
		::Spine::ExposedList_1<::Spine::Skin*>* skins; // 0x20
		::Spine::ExposedList_1<::Spine::Animation*>* animations; // 0x28
		::System::String* audioPath; // 0x30
		::Spine::ExposedList_1<::Spine::EventData*>* events; // 0x38
		::System::String* name; // 0x40
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x48
		::System::String* imagesPath; // 0x50
		::Spine::ExposedList_1<::Spine::TransformConstraintData*>* transformConstraints; // 0x58
		::System::String* version; // 0x60
		::Spine::ExposedList_1<::Spine::PathConstraintData*>* pathConstraints; // 0x68
		::Spine::ExposedList_1<::Spine::IkConstraintData*>* ikConstraints; // 0x70
		::Spine::Skin* defaultSkin; // 0x78
		::System::Single fps; // 0x80
		::System::Single x; // 0x84
		::System::Single height; // 0x88
		::System::Single y; // 0x8C
		::System::Single width; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_NAME_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::SlotData*>* get_Slots()
		{
			return ((::Spine::ExposedList_1<::Spine::SlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_SLOTS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Skin*>* get_Skins()
		{
			return ((::Spine::ExposedList_1<::Spine::Skin*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_SKINS_OFFSET))(this);
		}

		::System::Void set_Skins(::Spine::ExposedList_1<::Spine::Skin*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Skin*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_SKINS_OFFSET))(this, a1);
		}

		::Spine::Skin* get_DefaultSkin()
		{
			return ((::Spine::Skin*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET))(this);
		}

		::System::Void set_DefaultSkin(::Spine::Skin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::EventData*>* get_Events()
		{
			return ((::Spine::ExposedList_1<::Spine::EventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_EVENTS_OFFSET))(this);
		}

		::System::Void set_Events(::Spine::ExposedList_1<::Spine::EventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::EventData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_EVENTS_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::Animation*>* get_Animations()
		{
			return ((::Spine::ExposedList_1<::Spine::Animation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET))(this);
		}

		::System::Void set_Animations(::Spine::ExposedList_1<::Spine::Animation*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Animation*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::IkConstraintData*>* get_IkConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::IkConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_IkConstraints(::Spine::ExposedList_1<::Spine::IkConstraintData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::IkConstraintData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::TransformConstraintData*>* get_TransformConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::TransformConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_TransformConstraints(::Spine::ExposedList_1<::Spine::TransformConstraintData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::TransformConstraintData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::PathConstraintData*>* get_PathConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::PathConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_PathConstraints(::Spine::ExposedList_1<::Spine::PathConstraintData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::PathConstraintData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET))(this, a1);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_VERSION_OFFSET))(this, a1);
		}

		::System::String* get_Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_HASH_OFFSET))(this, a1);
		}

		::System::String* get_ImagesPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET))(this);
		}

		::System::Void set_ImagesPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET))(this, a1);
		}

		::System::String* get_AudioPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET))(this);
		}

		::System::Void set_AudioPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET))(this, a1);
		}

		::System::Single get_Fps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_FPS_OFFSET))(this);
		}

		::System::Void set_Fps(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_FPS_OFFSET))(this, a1);
		}

		::Spine::BoneData* FindBone(::System::String* a1)
		{
			return ((::Spine::BoneData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDBONE_OFFSET))(this, a1);
		}

		::Spine::SlotData* FindSlot(::System::String* a1)
		{
			return ((::Spine::SlotData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDSLOT_OFFSET))(this, a1);
		}

		::Spine::Skin* FindSkin(::System::String* a1)
		{
			return ((::Spine::Skin*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDSKIN_OFFSET))(this, a1);
		}

		::Spine::EventData* FindEvent(::System::String* a1)
		{
			return ((::Spine::EventData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDEVENT_OFFSET))(this, a1);
		}

		::Spine::Animation* FindAnimation(::System::String* a1)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDANIMATION_OFFSET))(this, a1);
		}

		::Spine::IkConstraintData* FindIkConstraint(::System::String* a1)
		{
			return ((::Spine::IkConstraintData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET))(this, a1);
		}

		::Spine::TransformConstraintData* FindTransformConstraint(::System::String* a1)
		{
			return ((::Spine::TransformConstraintData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET))(this, a1);
		}

		::Spine::PathConstraintData* FindPathConstraint(::System::String* a1)
		{
			return ((::Spine::PathConstraintData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_TOSTRING_OFFSET))(this);
		}
	};
}
