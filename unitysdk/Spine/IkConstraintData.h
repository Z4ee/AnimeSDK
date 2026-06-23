#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintData.h"

namespace Spine { class BoneData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_IKCONSTRAINTDATA_GET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E7D53A0)
#define SPINE_IKCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1E7D5330)
#define SPINE_IKCONSTRAINTDATA_GET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1E7D53C0)
#define SPINE_IKCONSTRAINTDATA_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1E7D5360)
#define SPINE_IKCONSTRAINTDATA_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1E7D5380)
#define SPINE_IKCONSTRAINTDATA_GET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1E7D53E0)
#define SPINE_IKCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E7D5340)
#define SPINE_IKCONSTRAINTDATA_GET_UNIFORM_OFFSET UNITYSDK_OFFSET(0x1E7D5400)
#define SPINE_IKCONSTRAINTDATA_SET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E7D53B0)
#define SPINE_IKCONSTRAINTDATA_SET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1E7D53D0)
#define SPINE_IKCONSTRAINTDATA_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1E7D5370)
#define SPINE_IKCONSTRAINTDATA_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1E7D5390)
#define SPINE_IKCONSTRAINTDATA_SET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1E7D53F0)
#define SPINE_IKCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E7D5350)
#define SPINE_IKCONSTRAINTDATA_SET_UNIFORM_OFFSET UNITYSDK_OFFSET(0x1E7D5410)
#define SPINE_IKCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D5270)

namespace Spine
{
	inline static constexpr unsigned int IkConstraintData_TypeDefinitionIndex = 32879;

	class IkConstraintData : public ::Spine::ConstraintData
	{
	public:
		::Spine::BoneData* target; // 0x20
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x28
		::System::Single mix; // 0x30
		::System::Boolean stretch; // 0x34
		::System::Boolean compress; // 0x35
		::System::Boolean uniform; // 0x36
		::System::Single softness; // 0x38
		::System::Int32 bendDirection; // 0x3C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::BoneData* get_Target()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::BoneData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_TARGET_OFFSET))(this, value);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_MIX_OFFSET))(this, value);
		}

		::System::Single get_Softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_Softness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_SOFTNESS_OFFSET))(this, value);
		}

		::System::Int32 get_BendDirection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_BENDDIRECTION_OFFSET))(this);
		}

		::System::Void set_BendDirection(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_BENDDIRECTION_OFFSET))(this, value);
		}

		::System::Boolean get_Compress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_COMPRESS_OFFSET))(this);
		}

		::System::Void set_Compress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_COMPRESS_OFFSET))(this, value);
		}

		::System::Boolean get_Stretch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_STRETCH_OFFSET))(this);
		}

		::System::Void set_Stretch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_STRETCH_OFFSET))(this, value);
		}

		::System::Boolean get_Uniform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_GET_UNIFORM_OFFSET))(this);
		}

		::System::Void set_Uniform(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINTDATA_SET_UNIFORM_OFFSET))(this, value);
		}
	};
}
