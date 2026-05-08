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

#define SPINE_SKELETONDATA_FINDANIMATION_OFFSET UNITYSDK_OFFSET(0x1C452BA0)
#define SPINE_SKELETONDATA_FINDBONE_OFFSET UNITYSDK_OFFSET(0x1C452680)
#define SPINE_SKELETONDATA_FINDEVENT_OFFSET UNITYSDK_OFFSET(0x1C452A20)
#define SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C452CB0)
#define SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C452ED0)
#define SPINE_SKELETONDATA_FINDSKIN_OFFSET UNITYSDK_OFFSET(0x1C4528A0)
#define SPINE_SKELETONDATA_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x1C452790)
#define SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C452DC0)
#define SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1C4524E0)
#define SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1C452640)
#define SPINE_SKELETONDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1C452460)
#define SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1C4524A0)
#define SPINE_SKELETONDATA_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1C4524C0)
#define SPINE_SKELETONDATA_GET_FPS_OFFSET UNITYSDK_OFFSET(0x1C452660)
#define SPINE_SKELETONDATA_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1C452600)
#define SPINE_SKELETONDATA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C4525C0)
#define SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C452500)
#define SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x1C452620)
#define SPINE_SKELETONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C452440)
#define SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C452540)
#define SPINE_SKELETONDATA_GET_SKINS_OFFSET UNITYSDK_OFFSET(0x1C452480)
#define SPINE_SKELETONDATA_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1C452470)
#define SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C452520)
#define SPINE_SKELETONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C4525E0)
#define SPINE_SKELETONDATA_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1C4525A0)
#define SPINE_SKELETONDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1C452560)
#define SPINE_SKELETONDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1C452580)
#define SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1C4524F0)
#define SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1C452650)
#define SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1C4524B0)
#define SPINE_SKELETONDATA_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1C4524D0)
#define SPINE_SKELETONDATA_SET_FPS_OFFSET UNITYSDK_OFFSET(0x1C452670)
#define SPINE_SKELETONDATA_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1C452610)
#define SPINE_SKELETONDATA_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C4525D0)
#define SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C452510)
#define SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x1C452630)
#define SPINE_SKELETONDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C452450)
#define SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C452550)
#define SPINE_SKELETONDATA_SET_SKINS_OFFSET UNITYSDK_OFFSET(0x1C452490)
#define SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C452530)
#define SPINE_SKELETONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C4525F0)
#define SPINE_SKELETONDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1C4525B0)
#define SPINE_SKELETONDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1C452570)
#define SPINE_SKELETONDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1C452590)
#define SPINE_SKELETONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C453010)
#define SPINE_SKELETONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C453060)

namespace Spine
{
	inline static constexpr unsigned int SkeletonData_TypeDefinitionIndex = 31346;

	class SkeletonData : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Animation*>* animations; // 0x10
		::Spine::ExposedList_1<::Spine::SlotData*>* slots; // 0x18
		::System::String* hash; // 0x20
		::Spine::ExposedList_1<::Spine::TransformConstraintData*>* transformConstraints; // 0x28
		::System::String* name; // 0x30
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x38
		::Spine::ExposedList_1<::Spine::IkConstraintData*>* ikConstraints; // 0x40
		::Spine::ExposedList_1<::Spine::Skin*>* skins; // 0x48
		::Spine::ExposedList_1<::Spine::PathConstraintData*>* pathConstraints; // 0x50
		::System::String* version; // 0x58
		::Spine::ExposedList_1<::Spine::EventData*>* events; // 0x60
		::Spine::Skin* defaultSkin; // 0x68
		::System::String* imagesPath; // 0x70
		::System::String* audioPath; // 0x78
		::System::Single height; // 0x80
		::System::Single fps; // 0x84
		::System::Single x; // 0x88
		::System::Single width; // 0x8C
		::System::Single y; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_NAME_OFFSET))(this, value);
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

		::System::Void set_Skins(::Spine::ExposedList_1<::Spine::Skin*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Skin*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_SKINS_OFFSET))(this, value);
		}

		::Spine::Skin* get_DefaultSkin()
		{
			return ((::Spine::Skin*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET))(this);
		}

		::System::Void set_DefaultSkin(::Spine::Skin* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::EventData*>* get_Events()
		{
			return ((::Spine::ExposedList_1<::Spine::EventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_EVENTS_OFFSET))(this);
		}

		::System::Void set_Events(::Spine::ExposedList_1<::Spine::EventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::EventData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_EVENTS_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::Animation*>* get_Animations()
		{
			return ((::Spine::ExposedList_1<::Spine::Animation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET))(this);
		}

		::System::Void set_Animations(::Spine::ExposedList_1<::Spine::Animation*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Animation*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::IkConstraintData*>* get_IkConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::IkConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_IkConstraints(::Spine::ExposedList_1<::Spine::IkConstraintData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::IkConstraintData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::TransformConstraintData*>* get_TransformConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::TransformConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_TransformConstraints(::Spine::ExposedList_1<::Spine::TransformConstraintData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::TransformConstraintData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::PathConstraintData*>* get_PathConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::PathConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_PathConstraints(::Spine::ExposedList_1<::Spine::PathConstraintData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::PathConstraintData*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET))(this, value);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_VERSION_OFFSET))(this, value);
		}

		::System::String* get_Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_HASH_OFFSET))(this, value);
		}

		::System::String* get_ImagesPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET))(this);
		}

		::System::Void set_ImagesPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET))(this, value);
		}

		::System::String* get_AudioPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET))(this);
		}

		::System::Void set_AudioPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET))(this, value);
		}

		::System::Single get_Fps()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_GET_FPS_OFFSET))(this);
		}

		::System::Void set_Fps(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_SET_FPS_OFFSET))(this, value);
		}

		::Spine::BoneData* FindBone(::System::String* boneName)
		{
			return ((::Spine::BoneData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDBONE_OFFSET))(this, boneName);
		}

		::Spine::SlotData* FindSlot(::System::String* slotName)
		{
			return ((::Spine::SlotData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDSLOT_OFFSET))(this, slotName);
		}

		::Spine::Skin* FindSkin(::System::String* skinName)
		{
			return ((::Spine::Skin*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDSKIN_OFFSET))(this, skinName);
		}

		::Spine::EventData* FindEvent(::System::String* eventDataName)
		{
			return ((::Spine::EventData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDEVENT_OFFSET))(this, eventDataName);
		}

		::Spine::Animation* FindAnimation(::System::String* animationName)
		{
			return ((::Spine::Animation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDANIMATION_OFFSET))(this, animationName);
		}

		::Spine::IkConstraintData* FindIkConstraint(::System::String* constraintName)
		{
			return ((::Spine::IkConstraintData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET))(this, constraintName);
		}

		::Spine::TransformConstraintData* FindTransformConstraint(::System::String* constraintName)
		{
			return ((::Spine::TransformConstraintData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET))(this, constraintName);
		}

		::Spine::PathConstraintData* FindPathConstraint(::System::String* constraintName)
		{
			return ((::Spine::PathConstraintData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET))(this, constraintName);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONDATA_TOSTRING_OFFSET))(this);
		}
	};
}
