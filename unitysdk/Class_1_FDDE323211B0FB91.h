#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5A58B1D113B4F87B;
class Class_1_D40936EF3BF54118_11;
class Class_1_D40936EF3BF54118_81;
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FDDE323211B0FB91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169CB480)
#define CLASS_1_FDDE323211B0FB91_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x169CBBA0)
#define CLASS_1_FDDE323211B0FB91_METHOD_1_28D8237B02FEB1DD_OFFSET UNITYSDK_OFFSET(0x169CBAC0)
#define CLASS_1_FDDE323211B0FB91_METHOD_1_DA3628DA1C2AAF6F_1_OFFSET UNITYSDK_OFFSET(0x169CB830)
#define CLASS_1_FDDE323211B0FB91_METHOD_1_DA3628DA1C2AAF6F_OFFSET UNITYSDK_OFFSET(0x169CB5A0)
#define CLASS_1_FDDE323211B0FB91_SET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x169CBBB0)
#define CLASS_1_FDDE323211B0FB91__CTOR_OFFSET UNITYSDK_OFFSET(0x169CB460)

inline static constexpr unsigned int Class_1_FDDE323211B0FB91_TypeDefinitionIndex = 64196;

class Class_1_FDDE323211B0FB91 : public ::System::Object
{
public:
	::Class_1_5A58B1D113B4F87B* _AchivedBuffs_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueBuffEnhanceItem*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DA3628DA1C2AAF6F(::Class_1_D40936EF3BF54118_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_81*))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91_METHOD_1_DA3628DA1C2AAF6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA3628DA1C2AAF6F_1(::Class_1_D40936EF3BF54118_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_11*))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91_METHOD_1_DA3628DA1C2AAF6F_1_OFFSET))(this, a1);
	}

	::RPG::Client::RogueBuffEnhanceItem* Method_1_28D8237B02FEB1DD(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91_METHOD_1_28D8237B02FEB1DD_OFFSET))(this, a1);
	}

	::Class_1_5A58B1D113B4F87B* get_AchivedBuffs()
	{
		return ((::Class_1_5A58B1D113B4F87B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91_GET_ACHIVEDBUFFS_OFFSET))(this);
	}

	::System::Void set_AchivedBuffs(::Class_1_5A58B1D113B4F87B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A58B1D113B4F87B*))((::PBYTE)hIl2Cpp + CLASS_1_FDDE323211B0FB91_SET_ACHIVEDBUFFS_OFFSET))(this, a1);
	}
};
