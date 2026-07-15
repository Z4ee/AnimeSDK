#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_66D6A0360B93D27A_1;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_B34AB633218B77B2_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16C7DD70)
#define CLASS_2_B34AB633218B77B2_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16C7E470)
#define CLASS_2_B34AB633218B77B2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C7E4D0)
#define CLASS_2_B34AB633218B77B2_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x16C7E270)
#define CLASS_2_B34AB633218B77B2_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x16C7E300)
#define CLASS_2_B34AB633218B77B2_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x16C7DDC0)
#define CLASS_2_B34AB633218B77B2__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7E520)

inline static constexpr unsigned int Class_2_B34AB633218B77B2_TypeDefinitionIndex = 62256;

class Class_2_B34AB633218B77B2 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x10
	::RPG::Client::GridFightRole* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_66D6A0360B93D27A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66D6A0360B93D27A_1*))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34AB633218B77B2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
