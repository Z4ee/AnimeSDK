#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintData.h"

namespace Spine { class BoneData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_IKCONSTRAINTDATA_GET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1AC57A30)
#define SPINE_IKCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1AC579C0)
#define SPINE_IKCONSTRAINTDATA_GET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1AC57A50)
#define SPINE_IKCONSTRAINTDATA_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1AC579F0)
#define SPINE_IKCONSTRAINTDATA_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1AC57A10)
#define SPINE_IKCONSTRAINTDATA_GET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1AC57A70)
#define SPINE_IKCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AC579D0)
#define SPINE_IKCONSTRAINTDATA_GET_UNIFORM_OFFSET UNITYSDK_OFFSET(0x1AC57A90)
#define SPINE_IKCONSTRAINTDATA_SET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1AC57A40)
#define SPINE_IKCONSTRAINTDATA_SET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1AC57A60)
#define SPINE_IKCONSTRAINTDATA_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1AC57A00)
#define SPINE_IKCONSTRAINTDATA_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1AC57A20)
#define SPINE_IKCONSTRAINTDATA_SET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1AC57A80)
#define SPINE_IKCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AC579E0)
#define SPINE_IKCONSTRAINTDATA_SET_UNIFORM_OFFSET UNITYSDK_OFFSET(0x1AC57AA0)
#define SPINE_IKCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC57910)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintData_TypeDefinitionIndex = 36736;

	class IkConstraintData : public ::Spine::ConstraintData
	{
	public:
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x20
		::Spine::BoneData* target; // 0x28
		::System::Single softness; // 0x30
		::System::Boolean uniform; // 0x34
		::System::Boolean compress; // 0x35
		::System::Boolean stretch; // 0x36
		::System::Int32 bendDirection; // 0x38
		::System::Single mix; // 0x3C

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA__CTOR_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::BoneData* get_Target()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::BoneData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_MIX_OFFSET))(this, a1);
		}

		::System::Single get_Softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_Softness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_SOFTNESS_OFFSET))(this, a1);
		}

		::System::Int32 get_BendDirection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_BENDDIRECTION_OFFSET))(this);
		}

		::System::Void set_BendDirection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_BENDDIRECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_Compress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_COMPRESS_OFFSET))(this);
		}

		::System::Void set_Compress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_COMPRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_Stretch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_STRETCH_OFFSET))(this);
		}

		::System::Void set_Stretch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_STRETCH_OFFSET))(this, a1);
		}

		::System::Boolean get_Uniform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_UNIFORM_OFFSET))(this);
		}

		::System::Void set_Uniform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_UNIFORM_OFFSET))(this, a1);
		}
	};
}
