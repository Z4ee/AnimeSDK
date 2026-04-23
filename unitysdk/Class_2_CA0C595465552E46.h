#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54254A0D4D720717.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"

class Class_1_4BC858D7C27E10ED_55;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CA0C595465552E46_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x11D711A0)
#define CLASS_2_CA0C595465552E46_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11D710C0)
#define CLASS_2_CA0C595465552E46_METHOD_2_82EFE602882BD28F_OFFSET UNITYSDK_OFFSET(0x11D714D0)
#define CLASS_2_CA0C595465552E46_METHOD_2_959C0C43ADD4886A_OFFSET UNITYSDK_OFFSET(0x11D71410)
#define CLASS_2_CA0C595465552E46_METHOD_2_F97FA0F0DA396A36_OFFSET UNITYSDK_OFFSET(0x11D715D0)
#define CLASS_2_CA0C595465552E46_METHOD_2_FAC2975DD754B291_OFFSET UNITYSDK_OFFSET(0x11D71680)
#define CLASS_2_CA0C595465552E46__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D719E0)
#define CLASS_2_CA0C595465552E46__CTOR_OFFSET UNITYSDK_OFFSET(0x11D70BB0)
#define CLASS_2_CA0C595465552E46___NOTIFYFLOWDISPOSE_B__5_0_OFFSET UNITYSDK_OFFSET(0x11D71B30)

inline static constexpr unsigned int Class_2_CA0C595465552E46_TypeDefinitionIndex = 62339;

class Class_2_CA0C595465552E46 : public ::Class_1_54254A0D4D720717
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA0C595465552E46_TypeDefinitionIndex)->GetStaticField(0x565C0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueFormulaData*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_55*>* Field_2_0; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_55*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_55*>*))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46__CCTOR_OFFSET))();
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_959C0C43ADD4886A(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46_METHOD_2_959C0C43ADD4886A_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_82EFE602882BD28F(::Class_1_4BC858D7C27E10ED_55* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_55*))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46_METHOD_2_82EFE602882BD28F_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_F97FA0F0DA396A36()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46_METHOD_2_F97FA0F0DA396A36_OFFSET))(this);
	}

	::System::Int32 Method_2_FAC2975DD754B291(::Class_1_4BC858D7C27E10ED_55* a1, ::Class_1_4BC858D7C27E10ED_55* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_55*, ::Class_1_4BC858D7C27E10ED_55*))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46_METHOD_2_FAC2975DD754B291_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* __NotifyFlowDispose_b__5_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0C595465552E46___NOTIFYFLOWDISPOSE_B__5_0_OFFSET))(this);
	}
};
