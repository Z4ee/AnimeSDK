#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_1_B9F7BCACFE0BA74A_Class_3_62AC09F6E0FF2A60;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec2; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_0DBB1E0666F0C858_OFFSET UNITYSDK_OFFSET(0x11DE25D0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_1095F86693A8D34A_OFFSET UNITYSDK_OFFSET(0x11DE3F30)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_19A92154F9B087F3_OFFSET UNITYSDK_OFFSET(0x11DE4A10)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_3FA6C1D9AF629543_OFFSET UNITYSDK_OFFSET(0x11DE2FD0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_43C1603BE286CDBB_1_OFFSET UNITYSDK_OFFSET(0x11DE4840)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_43C1603BE286CDBB_2_OFFSET UNITYSDK_OFFSET(0x11DE6A00)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_43C1603BE286CDBB_OFFSET UNITYSDK_OFFSET(0x11DE24B0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_4B54FBEB34F47221_OFFSET UNITYSDK_OFFSET(0x11DE41F0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_55EFA6122232D85B_OFFSET UNITYSDK_OFFSET(0x11DE58B0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_576239ED25E7D4CD_1_OFFSET UNITYSDK_OFFSET(0x11DE3630)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_576239ED25E7D4CD_OFFSET UNITYSDK_OFFSET(0x11DE33A0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_58B1EDFF84004D08_OFFSET UNITYSDK_OFFSET(0x11DE5510)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_5F03B288EA859956_OFFSET UNITYSDK_OFFSET(0x11DE5F20)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_5F9DFC5B03C8610D_OFFSET UNITYSDK_OFFSET(0x11DE4EF0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_65A08840BB8C38A7_OFFSET UNITYSDK_OFFSET(0x11DE6750)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_73CAE5D77E88CE62_OFFSET UNITYSDK_OFFSET(0x11DE5B50)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_83941A5D89669396_OFFSET UNITYSDK_OFFSET(0x11DE6370)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_982B3872EA29F646_OFFSET UNITYSDK_OFFSET(0x11DE2200)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_A29F5E777135D22B_OFFSET UNITYSDK_OFFSET(0x11DE5130)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_A4FC50728ACAE0A6_OFFSET UNITYSDK_OFFSET(0x11DE6B20)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_B4D0E0902126C444_OFFSET UNITYSDK_OFFSET(0x11DE5490)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_BD26C6F4EFBB033B_OFFSET UNITYSDK_OFFSET(0x11DE4060)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_CC8A49E3CF37D611_OFFSET UNITYSDK_OFFSET(0x11DE2C60)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_D5DF55AA76B05723_OFFSET UNITYSDK_OFFSET(0x11DE60F0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_E782840F3BF306B6_OFFSET UNITYSDK_OFFSET(0x11DE4DC0)
#define CLASS_1_B9F7BCACFE0BA74A_METHOD_1_EF8F6723217CF89E_OFFSET UNITYSDK_OFFSET(0x11DE4990)
#define CLASS_1_B9F7BCACFE0BA74A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DE6F20)

inline static constexpr unsigned int Class_1_B9F7BCACFE0BA74A_TypeDefinitionIndex = 49960;

class Class_1_B9F7BCACFE0BA74A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_B9F7BCACFE0BA74A_Class_3_62AC09F6E0FF2A60*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_B9F7BCACFE0BA74A_Class_3_62AC09F6E0FF2A60*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9F7BCACFE0BA74A_TypeDefinitionIndex)->GetStaticField(0x4CE30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_982B3872EA29F646(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_982B3872EA29F646_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_43C1603BE286CDBB(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_43C1603BE286CDBB_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0DBB1E0666F0C858(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_0DBB1E0666F0C858_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_3FA6C1D9AF629543(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_3FA6C1D9AF629543_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_576239ED25E7D4CD(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_576239ED25E7D4CD_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_576239ED25E7D4CD_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_576239ED25E7D4CD_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_CC8A49E3CF37D611(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_CC8A49E3CF37D611_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixVec2 Method_1_1095F86693A8D34A(::RPG::GameCore::ValueEvaluatorVec2* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::ValueEvaluatorVec2*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_1095F86693A8D34A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixVec3 Method_1_BD26C6F4EFBB033B(::RPG::GameCore::ValueEvaluatorVec3* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::ValueEvaluatorVec3*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_BD26C6F4EFBB033B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4B54FBEB34F47221(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2, ::RPG::GameCore::TaskContext* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_4B54FBEB34F47221_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::FixPoint Method_1_43C1603BE286CDBB_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_43C1603BE286CDBB_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_EF8F6723217CF89E(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_EF8F6723217CF89E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_19A92154F9B087F3(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_19A92154F9B087F3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E782840F3BF306B6(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_E782840F3BF306B6_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5F9DFC5B03C8610D(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_5F9DFC5B03C8610D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A29F5E777135D22B(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_A29F5E777135D22B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_B4D0E0902126C444(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_B4D0E0902126C444_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_58B1EDFF84004D08(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_58B1EDFF84004D08_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_55EFA6122232D85B(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_55EFA6122232D85B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_73CAE5D77E88CE62(::RPG::GameCore::RtDirConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtDirConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_73CAE5D77E88CE62_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5F03B288EA859956(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_5F03B288EA859956_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_D5DF55AA76B05723(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_D5DF55AA76B05723_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_83941A5D89669396(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_83941A5D89669396_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_65A08840BB8C38A7(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_65A08840BB8C38A7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_43C1603BE286CDBB_2(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_43C1603BE286CDBB_2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A4FC50728ACAE0A6(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_B9F7BCACFE0BA74A_METHOD_1_A4FC50728ACAE0A6_OFFSET))(a1, a2);
	}
};
