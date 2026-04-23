#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GroupCbType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ShaderGroupAlloc.h"

#define CLASS_1_0551325621FDC7A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A377E0)
#define CLASS_1_0551325621FDC7A7_METHOD_1_0C2E16DA38868706_OFFSET UNITYSDK_OFFSET(0x11A37910)
#define CLASS_1_0551325621FDC7A7_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x11A37770)
#define CLASS_1_0551325621FDC7A7_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11A37830)
#define CLASS_1_0551325621FDC7A7_METHOD_1_462AE28D2E76734C_OFFSET UNITYSDK_OFFSET(0x11A37B60)
#define CLASS_1_0551325621FDC7A7_METHOD_1_8425AE8B450CC8A4_OFFSET UNITYSDK_OFFSET(0x11A379F0)
#define CLASS_1_0551325621FDC7A7_METHOD_1_99AE60B687EAE694_OFFSET UNITYSDK_OFFSET(0x11A37880)
#define CLASS_1_0551325621FDC7A7_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x11A37C80)
#define CLASS_1_0551325621FDC7A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A37DD0)
#define CLASS_1_0551325621FDC7A7__CTOR_OFFSET UNITYSDK_OFFSET(0x11A37640)

inline static constexpr unsigned int Class_1_0551325621FDC7A7_TypeDefinitionIndex = 64348;

class Class_1_0551325621FDC7A7 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0551325621FDC7A7_TypeDefinitionIndex)->GetStaticField(0xDAD0);
	}
	::Il2CppArray<::System::Int32>* Field_1_2; // 0x10
	::Il2CppArray<::UnityEngine::ShaderGroupAlloc>* Field_1_1; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_99AE60B687EAE694(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_99AE60B687EAE694_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C2E16DA38868706(::RPG::Client::GroupCbType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_0C2E16DA38868706_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_1_8425AE8B450CC8A4()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_8425AE8B450CC8A4_OFFSET))(this);
	}

	::System::Void Method_1_462AE28D2E76734C(::RPG::Client::GroupCbType a1, ::System::Int32 a2, ::System::IntPtr a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GroupCbType, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_462AE28D2E76734C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0551325621FDC7A7_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}
};
