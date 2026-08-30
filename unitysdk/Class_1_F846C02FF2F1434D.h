#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GroupCbType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ShaderGroupAlloc.h"

#define CLASS_1_F846C02FF2F1434D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163D84E0)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x163D8470)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x163D8530)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_6C1396468F16E3FE_OFFSET UNITYSDK_OFFSET(0x163D8600)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_8425AE8B450CC8A4_OFFSET UNITYSDK_OFFSET(0x163D86D0)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_99AE60B687EAE694_OFFSET UNITYSDK_OFFSET(0x163D8580)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_AA10046B48295FA3_OFFSET UNITYSDK_OFFSET(0x163D8840)
#define CLASS_1_F846C02FF2F1434D_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x163D8940)
#define CLASS_1_F846C02FF2F1434D__CCTOR_OFFSET UNITYSDK_OFFSET(0x163D8A90)
#define CLASS_1_F846C02FF2F1434D__CTOR_OFFSET UNITYSDK_OFFSET(0x163D8360)

inline static constexpr unsigned int Class_1_F846C02FF2F1434D_TypeDefinitionIndex = 69780;

class Class_1_F846C02FF2F1434D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LEFELAABBKO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F846C02FF2F1434D_TypeDefinitionIndex)->GetStaticField(0xF970);
	}
	::Il2CppArray<::System::Int32>* DGKLFDAKMPH; // 0x10
	::Il2CppArray<::UnityEngine::ShaderGroupAlloc>* LKABNJCKEON; // 0x18
	::Il2CppArray<::System::Byte>* LPJCHANGGMN; // 0x20
	::System::UInt32 GMJLOINLDNE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_99AE60B687EAE694(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_99AE60B687EAE694_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C1396468F16E3FE(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_6C1396468F16E3FE_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_8425AE8B450CC8A4()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_8425AE8B450CC8A4_OFFSET))(this);
	}

	::System::Void Method_1_AA10046B48295FA3(::RPG::Client::GroupCbType a1, ::System::Int32 a2, ::System::IntPtr a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_AA10046B48295FA3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F846C02FF2F1434D_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}
};
