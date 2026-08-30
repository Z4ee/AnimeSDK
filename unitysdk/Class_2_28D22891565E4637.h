#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_637;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_28D22891565E4637_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16023A80)
#define CLASS_2_28D22891565E4637_METHOD_2_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x160231C0)
#define CLASS_2_28D22891565E4637_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x160243B0)
#define CLASS_2_28D22891565E4637_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16023140)
#define CLASS_2_28D22891565E4637_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x16023EF0)
#define CLASS_2_28D22891565E4637_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x16023D50)
#define CLASS_2_28D22891565E4637_METHOD_2_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0x16024290)
#define CLASS_2_28D22891565E4637_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x16022A00)
#define CLASS_2_28D22891565E4637_METHOD_2_5276488EF6F1DA44_OFFSET UNITYSDK_OFFSET(0x16024320)
#define CLASS_2_28D22891565E4637_METHOD_2_81D2517876704515_OFFSET UNITYSDK_OFFSET(0x16022BC0)
#define CLASS_2_28D22891565E4637_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x16022E90)
#define CLASS_2_28D22891565E4637_METHOD_2_A7E10B3DDAF18E7F_OFFSET UNITYSDK_OFFSET(0x16024100)
#define CLASS_2_28D22891565E4637_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x16023E50)
#define CLASS_2_28D22891565E4637_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x160238B0)
#define CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0x16023750)
#define CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x16022D30)
#define CLASS_2_28D22891565E4637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16022720)
#define CLASS_2_28D22891565E4637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x160236F0)
#define CLASS_2_28D22891565E4637_TICK_OFFSET UNITYSDK_OFFSET(0x16023BA0)
#define CLASS_2_28D22891565E4637__CTOR_OFFSET UNITYSDK_OFFSET(0x16022520)

inline static constexpr unsigned int Class_2_28D22891565E4637_TypeDefinitionIndex = 58420;

class Class_2_28D22891565E4637 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* GBHGJMLLLJB; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* BENDCBPOFIG; // 0x18
	::Il2CppArray<::RPG::GameCore::MunicipalChatEntityInfo*>* LNBNKCOCGEA; // 0x20
	::System::Object* LOJOFACFJBB; // 0x28
	::System::String* PGHBCPINJBE; // 0x30
	::Class_0_16E4307DCC419505_637* BCMPINBEIHH; // 0x38
	::RPG::GameCore::PlayMunicipalChat* EJJEEJENLDA; // 0x40
	::System::String* PPNDOKKCGLJ; // 0x48
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
	::RPG::GameCore::StringHash CJDELMNMBMD; // 0x58
	::System::Single LGGPOKAPMNI; // 0x5C
	::System::Boolean DGDEBKDAMMG; // 0x60
	::System::Boolean NJEMCPDFAOK; // 0x61

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_OFFSET))(this);
	}

	::System::Void Method_2_E8F71BC8471C5469_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_1_OFFSET))(this);
	}

	::System::Boolean Method_2_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_507A5122CD01412B_OFFSET))(this);
	}

	::System::Single Method_2_81D2517876704515()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_81D2517876704515_OFFSET))(this);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Void Method_2_B386444429A36A77(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_B386444429A36A77_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7E10B3DDAF18E7F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_A7E10B3DDAF18E7F_OFFSET))(this, a1);
	}

	::System::Void Method_2_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5276488EF6F1DA44(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_5276488EF6F1DA44_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ABEB23FF62F8B8F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_0ABEB23FF62F8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}
};
