#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_64F26B9ED0181D80.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_DF769287778AC293_METHOD_1_5BF44407DD8AE9FB_OFFSET UNITYSDK_OFFSET(0x11A95D00)
#define CLASS_1_DF769287778AC293_METHOD_1_A53A08945959EB6D_OFFSET UNITYSDK_OFFSET(0x11A95990)
#define CLASS_1_DF769287778AC293_METHOD_1_D67BAA276D731371_OFFSET UNITYSDK_OFFSET(0x11A964D0)
#define CLASS_1_DF769287778AC293__CTOR_OFFSET UNITYSDK_OFFSET(0x11A968A0)

inline static constexpr unsigned int Class_1_DF769287778AC293_TypeDefinitionIndex = 54415;

class Class_1_DF769287778AC293 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF769287778AC293_TypeDefinitionIndex)->GetStaticField(0x401F0);
	}
	::System::Collections::Generic::List_1<::Struct_2_64F26B9ED0181D80>* Field_1_3; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_0; // 0x20

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
