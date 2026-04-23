#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
class Class_1_73D621BDD90E61A7;
class Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1;
namespace RPG::GameCore { class ComplexSkillAIConfigEx; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_780D22339C62DFB3_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x96180A0)
#define CLASS_1_780D22339C62DFB3_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x9618060)
#define CLASS_1_780D22339C62DFB3_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9618020)
#define CLASS_1_780D22339C62DFB3_METHOD_1_5DB0A9A96011589C_OFFSET UNITYSDK_OFFSET(0x96177A0)
#define CLASS_1_780D22339C62DFB3_METHOD_1_F0B2DD9E59D3C2B4_OFFSET UNITYSDK_OFFSET(0x9617A50)
#define CLASS_1_780D22339C62DFB3__CCTOR_OFFSET UNITYSDK_OFFSET(0x96180F0)
#define CLASS_1_780D22339C62DFB3__CTOR_OFFSET UNITYSDK_OFFSET(0x96180E0)

inline static constexpr unsigned int Class_1_780D22339C62DFB3_TypeDefinitionIndex = 49915;

class Class_1_780D22339C62DFB3 : public ::System::Object
{
public:
	static ::RPG::GameCore::TaskContext** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::TaskContext**)Il2CppClass::FromTypeDefinitionIndex(Class_1_780D22339C62DFB3_TypeDefinitionIndex)->GetStaticField(0x63F40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3__CCTOR_OFFSET))();
	}

	static ::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A Method_1_5DB0A9A96011589C(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::ComplexSkillAIConfigEx* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* a6, ::Class_1_73D621BDD90E61A7* a7)
	{
		return ((::Class_1_BD800F5B29A08E1F_Struct_2_028675BFBEB6582A(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::ComplexSkillAIConfigEx*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1*, ::Class_1_73D621BDD90E61A7*))((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3_METHOD_1_5DB0A9A96011589C_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::RPG::GameCore::FixPoint Method_1_F0B2DD9E59D3C2B4(::RPG::GameCore::ComplexSkillAIConfigEx* a1, ::Class_1_70697F531F566942_1* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIConfigEx*, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3_METHOD_1_F0B2DD9E59D3C2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_780D22339C62DFB3_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}
};
