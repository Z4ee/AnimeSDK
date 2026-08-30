#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

class Class_1_A03382E2D02FBA6C_Class_3_62AC09F6E0FF2A60;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValueEvaluatorVec2; }
namespace RPG::GameCore { class ValueEvaluatorVec3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A03382E2D02FBA6C_METHOD_1_08CE5A65DC63ED9F_OFFSET UNITYSDK_OFFSET(0xB5DC410)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_0DBB1E0666F0C858_OFFSET UNITYSDK_OFFSET(0xB5DDD10)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_1095F86693A8D34A_OFFSET UNITYSDK_OFFSET(0xB5DCEB0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_25CBCCF3EC58A4D3_OFFSET UNITYSDK_OFFSET(0xB5DCB00)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_318946A1095A055B_OFFSET UNITYSDK_OFFSET(0xB5DFBB0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_42316F2F3C0C779F_OFFSET UNITYSDK_OFFSET(0xB5DE130)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_434B8F08BA9AAE50_OFFSET UNITYSDK_OFFSET(0xB5DF030)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_44B4D2E0077B1476_OFFSET UNITYSDK_OFFSET(0xB5DC830)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_5F03B288EA859956_OFFSET UNITYSDK_OFFSET(0xB5DF310)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_6CBAE25C60441AA7_OFFSET UNITYSDK_OFFSET(0xB5DDC90)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_760890C81A1D1B72_OFFSET UNITYSDK_OFFSET(0xB5DED70)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_7B7DAF78A7C3C5E0_OFFSET UNITYSDK_OFFSET(0xB5E0060)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_8173DF2DC8F4197F_OFFSET UNITYSDK_OFFSET(0xB5DF7F0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_84CB3402BDAEBDD5_OFFSET UNITYSDK_OFFSET(0xB5DB630)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_8C51D10013A3F710_OFFSET UNITYSDK_OFFSET(0xB5DE270)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_92F80489D7E76BF7_OFFSET UNITYSDK_OFFSET(0xB5DC140)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_95B8B0EE527A8F32_1_OFFSET UNITYSDK_OFFSET(0xB5DDB30)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_95B8B0EE527A8F32_OFFSET UNITYSDK_OFFSET(0xB5DB970)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_B4D0E0902126C444_OFFSET UNITYSDK_OFFSET(0xB5DEAB0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_B6CA1AB882410913_OFFSET UNITYSDK_OFFSET(0xB5DF4B0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_BD26C6F4EFBB033B_OFFSET UNITYSDK_OFFSET(0xB5DCFE0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_C4477661B9A4B266_OFFSET UNITYSDK_OFFSET(0xB5DFF20)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_CCB654D90F6DAEAD_OFFSET UNITYSDK_OFFSET(0xB5DD170)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_E70EEDA744BDC5B9_OFFSET UNITYSDK_OFFSET(0xB5DBAB0)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_ED9A7B9E6B7F02EA_OFFSET UNITYSDK_OFFSET(0xB5DEB30)
#define CLASS_1_A03382E2D02FBA6C_METHOD_1_F8F36AFEC7BC72E2_OFFSET UNITYSDK_OFFSET(0xB5DE700)
#define CLASS_1_A03382E2D02FBA6C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5E0480)

inline static constexpr unsigned int Class_1_A03382E2D02FBA6C_TypeDefinitionIndex = 54393;

class Class_1_A03382E2D02FBA6C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_A03382E2D02FBA6C_Class_3_62AC09F6E0FF2A60*>** StaticGet_LAANOLJPOAM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_A03382E2D02FBA6C_Class_3_62AC09F6E0FF2A60*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03382E2D02FBA6C_TypeDefinitionIndex)->GetStaticField(0x64560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FixPoint Method_1_84CB3402BDAEBDD5(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_84CB3402BDAEBDD5_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_95B8B0EE527A8F32(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_95B8B0EE527A8F32_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_E70EEDA744BDC5B9(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_E70EEDA744BDC5B9_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_08CE5A65DC63ED9F(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_08CE5A65DC63ED9F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_44B4D2E0077B1476(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_44B4D2E0077B1476_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_25CBCCF3EC58A4D3(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_25CBCCF3EC58A4D3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_92F80489D7E76BF7(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_92F80489D7E76BF7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixVec2 Method_1_1095F86693A8D34A(::RPG::GameCore::ValueEvaluatorVec2* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::ValueEvaluatorVec2*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_1095F86693A8D34A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixVec3 Method_1_BD26C6F4EFBB033B(::RPG::GameCore::ValueEvaluatorVec3* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixVec3(*)(::RPG::GameCore::ValueEvaluatorVec3*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_BD26C6F4EFBB033B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCB654D90F6DAEAD(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2, ::RPG::GameCore::TaskContext* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_CCB654D90F6DAEAD_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::FixPoint Method_1_95B8B0EE527A8F32_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_95B8B0EE527A8F32_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_6CBAE25C60441AA7(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_6CBAE25C60441AA7_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_0DBB1E0666F0C858(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_0DBB1E0666F0C858_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_42316F2F3C0C779F(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_42316F2F3C0C779F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_8C51D10013A3F710(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_8C51D10013A3F710_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_F8F36AFEC7BC72E2(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_F8F36AFEC7BC72E2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_B4D0E0902126C444(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_B4D0E0902126C444_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_ED9A7B9E6B7F02EA(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_ED9A7B9E6B7F02EA_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_760890C81A1D1B72(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_760890C81A1D1B72_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_434B8F08BA9AAE50(::RPG::GameCore::RtDirConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtDirConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_434B8F08BA9AAE50_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5F03B288EA859956(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_5F03B288EA859956_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_B6CA1AB882410913(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_B6CA1AB882410913_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_8173DF2DC8F4197F(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_8173DF2DC8F4197F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_318946A1095A055B(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_318946A1095A055B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_C4477661B9A4B266(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_C4477661B9A4B266_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_7B7DAF78A7C3C5E0(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A03382E2D02FBA6C_METHOD_1_7B7DAF78A7C3C5E0_OFFSET))(a1, a2);
	}
};
