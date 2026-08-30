#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_64F26B9ED0181D80.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_DF769287778AC293_METHOD_1_5BF44407DD8AE9FB_OFFSET UNITYSDK_OFFSET(0x18869930)
#define CLASS_1_DF769287778AC293_METHOD_1_A53A08945959EB6D_OFFSET UNITYSDK_OFFSET(0x188695C0)
#define CLASS_1_DF769287778AC293_METHOD_1_D67BAA276D731371_OFFSET UNITYSDK_OFFSET(0x1886A340)
#define CLASS_1_DF769287778AC293__CTOR_OFFSET UNITYSDK_OFFSET(0x1886A6E0)

inline static constexpr unsigned int Class_1_DF769287778AC293_TypeDefinitionIndex = 59157;

class Class_1_DF769287778AC293 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_DMMAEFCLCHK()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF769287778AC293_TypeDefinitionIndex)->GetStaticField(0x53950);
	}
	::System::Collections::Generic::List_1<::Struct_2_64F26B9ED0181D80>* CNJNGIOGGKH; // 0x10
	::System::UInt32 KAPJNJDCACL; // 0x18
	::System::UInt32 AMCPMEAOJJK; // 0x1C
	::System::UInt32 FGIGJGGFIOP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF769287778AC293__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_A53A08945959EB6D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF769287778AC293_METHOD_1_A53A08945959EB6D_OFFSET))(this);
	}

	::System::Boolean Method_1_5BF44407DD8AE9FB(::RPG::GameCore::BattleInstance* a1, ::Class_1_DF769287778AC293* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::Class_1_DF769287778AC293*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_DF769287778AC293_METHOD_1_5BF44407DD8AE9FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D67BAA276D731371(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_DF769287778AC293_METHOD_1_D67BAA276D731371_OFFSET))(this, a1);
	}
};
