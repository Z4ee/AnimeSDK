#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_F0E28D2E87DD1BD9_Class_3_BE27BF221D2C7791;
namespace RPG::GameCore { class AlleyConditionExtendParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_4EFBA0E599106A78_OFFSET UNITYSDK_OFFSET(0x9735600)
#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_7C6E42710B4EE421_OFFSET UNITYSDK_OFFSET(0x9735500)
#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_A57BABC06AC39F2C_OFFSET UNITYSDK_OFFSET(0x9734EC0)
#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x9734A20)
#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_BE0A744D771D75F8_OFFSET UNITYSDK_OFFSET(0x9734D60)
#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_CEABCFEFBD5363D5_OFFSET UNITYSDK_OFFSET(0x9734E40)
#define CLASS_1_F0E28D2E87DD1BD9_METHOD_1_FAE672999DD7FA35_OFFSET UNITYSDK_OFFSET(0x9735720)

inline static constexpr unsigned int Class_1_F0E28D2E87DD1BD9_TypeDefinitionIndex = 57443;

class Class_1_F0E28D2E87DD1BD9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::Class_1_F0E28D2E87DD1BD9_Class_3_BE27BF221D2C7791*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::Class_1_F0E28D2E87DD1BD9_Class_3_BE27BF221D2C7791*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E28D2E87DD1BD9_TypeDefinitionIndex)->GetStaticField(0x8270);
	}

	static ::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))();
	}

	static ::System::Boolean Method_1_BE0A744D771D75F8(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_BE0A744D771D75F8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A57BABC06AC39F2C(::Il2CppArray<::Class_1_4F30521532511E50*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::Class_1_4F30521532511E50*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_A57BABC06AC39F2C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CEABCFEFBD5363D5(::RPG::GameCore::AlleyConditionType a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AlleyConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_CEABCFEFBD5363D5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7C6E42710B4EE421(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_7C6E42710B4EE421_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4EFBA0E599106A78(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_4EFBA0E599106A78_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FAE672999DD7FA35(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E28D2E87DD1BD9_METHOD_1_FAE672999DD7FA35_OFFSET))(a1);
	}
};
