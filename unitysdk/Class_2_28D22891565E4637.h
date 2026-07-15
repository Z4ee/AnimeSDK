#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_0_16E4307DCC419505_602;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_28D22891565E4637_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B7E130)
#define CLASS_2_28D22891565E4637_METHOD_2_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x14B7D870)
#define CLASS_2_28D22891565E4637_METHOD_2_0ABEB23FF62F8B8F_OFFSET UNITYSDK_OFFSET(0x14B7EA70)
#define CLASS_2_28D22891565E4637_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14B7D7F0)
#define CLASS_2_28D22891565E4637_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x14B7E5A0)
#define CLASS_2_28D22891565E4637_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x14B7E400)
#define CLASS_2_28D22891565E4637_METHOD_2_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0x14B7E950)
#define CLASS_2_28D22891565E4637_METHOD_2_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x14B7D0B0)
#define CLASS_2_28D22891565E4637_METHOD_2_5276488EF6F1DA44_OFFSET UNITYSDK_OFFSET(0x14B7E9E0)
#define CLASS_2_28D22891565E4637_METHOD_2_81D2517876704515_OFFSET UNITYSDK_OFFSET(0x14B7D270)
#define CLASS_2_28D22891565E4637_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x14B7D540)
#define CLASS_2_28D22891565E4637_METHOD_2_A7E10B3DDAF18E7F_OFFSET UNITYSDK_OFFSET(0x14B7E7B0)
#define CLASS_2_28D22891565E4637_METHOD_2_B386444429A36A77_OFFSET UNITYSDK_OFFSET(0x14B7E500)
#define CLASS_2_28D22891565E4637_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x14B7DF60)
#define CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_1_OFFSET UNITYSDK_OFFSET(0x14B7DE00)
#define CLASS_2_28D22891565E4637_METHOD_2_E8F71BC8471C5469_OFFSET UNITYSDK_OFFSET(0x14B7D3E0)
#define CLASS_2_28D22891565E4637_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B7CDD0)
#define CLASS_2_28D22891565E4637_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B7DDA0)
#define CLASS_2_28D22891565E4637_TICK_OFFSET UNITYSDK_OFFSET(0x14B7E250)
#define CLASS_2_28D22891565E4637__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7CBD0)

inline static constexpr unsigned int Class_2_28D22891565E4637_TypeDefinitionIndex = 55689;

class Class_2_28D22891565E4637 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::System::String* Field_2_1; // 0x18
	::RPG::GameCore::PlayMunicipalChat* Field_2_2; // 0x20
	::System::Object* Field_2_3; // 0x28
	::Class_0_16E4307DCC419505_602* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_2_5; // 0x38
	::System::String* Field_2_6; // 0x40
	::Il2CppArray<::RPG::GameCore::MunicipalChatEntityInfo*>* Field_2_7; // 0x48
	::RPG::GameCore::TaskContext* Field_2_8; // 0x50
	::System::Single Field_2_9; // 0x58
	::RPG::GameCore::StringHash Field_2_10; // 0x5C
	::System::Boolean Field_2_11; // 0x60
	::System::Boolean Field_2_12; // 0x61

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
