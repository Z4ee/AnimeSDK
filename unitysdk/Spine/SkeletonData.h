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

#define SPINE_SKELETONDATA_FINDANIMATION_OFFSET UNITYSDK_OFFSET(0x1E7931E0)
#define SPINE_SKELETONDATA_FINDBONE_OFFSET UNITYSDK_OFFSET(0x1E792CC0)
#define SPINE_SKELETONDATA_FINDEVENT_OFFSET UNITYSDK_OFFSET(0x1E793060)
#define SPINE_SKELETONDATA_FINDIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E7932F0)
#define SPINE_SKELETONDATA_FINDPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E793510)
#define SPINE_SKELETONDATA_FINDSKIN_OFFSET UNITYSDK_OFFSET(0x1E792EE0)
#define SPINE_SKELETONDATA_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x1E792DD0)
#define SPINE_SKELETONDATA_FINDTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E793400)
#define SPINE_SKELETONDATA_GET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1E792B20)
#define SPINE_SKELETONDATA_GET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1E792C80)
#define SPINE_SKELETONDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1E792AA0)
#define SPINE_SKELETONDATA_GET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1E792AE0)
#define SPINE_SKELETONDATA_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1E792B00)
#define SPINE_SKELETONDATA_GET_FPS_OFFSET UNITYSDK_OFFSET(0x1E792CA0)
#define SPINE_SKELETONDATA_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1E792C40)
#define SPINE_SKELETONDATA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E792C00)
#define SPINE_SKELETONDATA_GET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E792B40)
#define SPINE_SKELETONDATA_GET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x1E792C60)
#define SPINE_SKELETONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E792A80)
#define SPINE_SKELETONDATA_GET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E792B80)
#define SPINE_SKELETONDATA_GET_SKINS_OFFSET UNITYSDK_OFFSET(0x1E792AC0)
#define SPINE_SKELETONDATA_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1E792AB0)
#define SPINE_SKELETONDATA_GET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E792B60)
#define SPINE_SKELETONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E792C20)
#define SPINE_SKELETONDATA_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E792BE0)
#define SPINE_SKELETONDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1E792BA0)
#define SPINE_SKELETONDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E792BC0)
#define SPINE_SKELETONDATA_SET_ANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1E792B30)
#define SPINE_SKELETONDATA_SET_AUDIOPATH_OFFSET UNITYSDK_OFFSET(0x1E792C90)
#define SPINE_SKELETONDATA_SET_DEFAULTSKIN_OFFSET UNITYSDK_OFFSET(0x1E792AF0)
#define SPINE_SKELETONDATA_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1E792B10)
#define SPINE_SKELETONDATA_SET_FPS_OFFSET UNITYSDK_OFFSET(0x1E792CB0)
#define SPINE_SKELETONDATA_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1E792C50)
#define SPINE_SKELETONDATA_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1E792C10)
#define SPINE_SKELETONDATA_SET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E792B50)
#define SPINE_SKELETONDATA_SET_IMAGESPATH_OFFSET UNITYSDK_OFFSET(0x1E792C70)
#define SPINE_SKELETONDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E792A90)
#define SPINE_SKELETONDATA_SET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E792B90)
#define SPINE_SKELETONDATA_SET_SKINS_OFFSET UNITYSDK_OFFSET(0x1E792AD0)
#define SPINE_SKELETONDATA_SET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E792B70)
#define SPINE_SKELETONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1E792C30)
#define SPINE_SKELETONDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E792BF0)
#define SPINE_SKELETONDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1E792BB0)
#define SPINE_SKELETONDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1E792BD0)
#define SPINE_SKELETONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E793650)
#define SPINE_SKELETONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7936A0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonData_TypeDefinitionIndex = 32897;

	class SkeletonData : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x10
		::Spine::ExposedList_1<::Spine::TransformConstraintData*>* transformConstraints; // 0x18
		::System::String* hash; // 0x20
		::System::String* imagesPath; // 0x28
		::Spine::ExposedList_1<::Spine::Animation*>* animations; // 0x30
		::System::String* version; // 0x38
		::System::String* audioPath; // 0x40
		::Spine::ExposedList_1<::Spine::Skin*>* skins; // 0x48
		::Spine::ExposedList_1<::Spine::EventData*>* events; // 0x50
		::System::String* name; // 0x58
		::Spine::ExposedList_1<::Spine::IkConstraintData*>* ikConstraints; // 0x60
		::Spine::ExposedList_1<::Spine::PathConstraintData*>* pathConstraints; // 0x68
		::Spine::Skin* defaultSkin; // 0x70
		::Spine::ExposedList_1<::Spine::SlotData*>* slots; // 0x78
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
