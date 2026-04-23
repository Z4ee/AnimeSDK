#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_545;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_138D7411B1643FD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2E00B0)
#define CLASS_2_138D7411B1643FD7_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0xF2E08E0)
#define CLASS_2_138D7411B1643FD7_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xF2DF890)
#define CLASS_2_138D7411B1643FD7_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xF2E04A0)
#define CLASS_2_138D7411B1643FD7_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xF2DFDE0)
#define CLASS_2_138D7411B1643FD7_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xF2DFF20)
#define CLASS_2_138D7411B1643FD7_METHOD_2_81D2517876704515_OFFSET UNITYSDK_OFFSET(0xF2DF420)
#define CLASS_2_138D7411B1643FD7_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0xF2DF690)
#define CLASS_2_138D7411B1643FD7_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0xF2E0400)
#define CLASS_2_138D7411B1643FD7_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xF2DF910)
#define CLASS_2_138D7411B1643FD7_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xF2E0850)
#define CLASS_2_138D7411B1643FD7_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xF2E07C0)
#define CLASS_2_138D7411B1643FD7_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xF2E0360)
#define CLASS_2_138D7411B1643FD7_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0xF2DF280)
#define CLASS_2_138D7411B1643FD7_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0xF2E0640)
#define CLASS_2_138D7411B1643FD7_METHOD_2_F088F946AD14C0AD_OFFSET UNITYSDK_OFFSET(0xF2DF550)
#define CLASS_2_138D7411B1643FD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2DEFD0)
#define CLASS_2_138D7411B1643FD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF2DFD80)
#define CLASS_2_138D7411B1643FD7_TICK_OFFSET UNITYSDK_OFFSET(0xF2E01E0)
#define CLASS_2_138D7411B1643FD7__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DEDD0)

inline static constexpr unsigned int Class_2_138D7411B1643FD7_TypeDefinitionIndex = 53741;

class Class_2_138D7411B1643FD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_6; // 0x18
	::System::Object* Field_2_4; // 0x20
	::System::String* Field_2_10; // 0x28
	::RPG::GameCore::PlayMunicipalChat* Field_2_2; // 0x30
	::Il2CppArray<::RPG::GameCore::MunicipalChatEntityInfo*>* Field_2_3; // 0x38
	::System::String* Field_2_11; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::Class_0_16E4307DCC419505_545* Field_2_5; // 0x50
	::System::Boolean Field_2_12; // 0x58
	::System::Boolean Field_2_8; // 0x59
	::RPG::GameCore::StringHash Field_2_9; // 0x5C
	::System::Single Field_2_7; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_F088F946AD14C0AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_F088F946AD14C0AD_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Single Method_2_81D2517876704515()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_81D2517876704515_OFFSET))(this);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}
};
