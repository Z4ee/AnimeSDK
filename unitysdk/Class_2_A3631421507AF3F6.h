#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_66C4D81440373C6E.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9B8A28A306558B7F;
class Class_2_208CC9941471731A_131;
namespace MoleMole { class MonoEntity; }
namespace System { class String; }

#define CLASS_2_A3631421507AF3F6_METHOD_2_0CE0AF56CB7D1263_OFFSET UNITYSDK_OFFSET(0x163C1DC0)
#define CLASS_2_A3631421507AF3F6_METHOD_2_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x163C1D20)
#define CLASS_2_A3631421507AF3F6_METHOD_2_1D56A47215A409EA_OFFSET UNITYSDK_OFFSET(0x163C1980)
#define CLASS_2_A3631421507AF3F6_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x163C1D00)
#define CLASS_2_A3631421507AF3F6_METHOD_2_2791BA95B262E243_OFFSET UNITYSDK_OFFSET(0x163C1A30)
#define CLASS_2_A3631421507AF3F6_METHOD_2_7C9F3E12F350460D_OFFSET UNITYSDK_OFFSET(0x163C1E50)
#define CLASS_2_A3631421507AF3F6_METHOD_2_BEE7A5DEE098F4A9_OFFSET UNITYSDK_OFFSET(0x163C1AA0)
#define CLASS_2_A3631421507AF3F6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x163C1930)
#define CLASS_2_A3631421507AF3F6_METHOD_2_CCC8D6DC3E7C04F2_OFFSET UNITYSDK_OFFSET(0x163C1D10)
#define CLASS_2_A3631421507AF3F6__CTOR_OFFSET UNITYSDK_OFFSET(0x163C1A90)

inline static constexpr unsigned int Class_2_A3631421507AF3F6_TypeDefinitionIndex = 58530;

class Class_2_A3631421507AF3F6 : public ::Class_1_66C4D81440373C6E
{
public:
	::MoleMole::MonoEntity* Field_2_0; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* Method_2_1D56A47215A409EA()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_1D56A47215A409EA_OFFSET))(this);
	}

	::System::Void Method_2_2791BA95B262E243(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_2791BA95B262E243_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BEE7A5DEE098F4A9(::System::UInt32 a1, ::Class_1_9B8A28A306558B7F* a2, ::MoleMole::MonoEntity* a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9B8A28A306558B7F*, ::MoleMole::MonoEntity*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_BEE7A5DEE098F4A9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::MoleMole::MonoEntity* Method_2_CCC8D6DC3E7C04F2()
	{
		return ((::MoleMole::MonoEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_CCC8D6DC3E7C04F2_OFFSET))(this);
	}

	::System::Void Method_2_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* Method_2_0CE0AF56CB7D1263()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_0CE0AF56CB7D1263_OFFSET))(this);
	}

	::System::Void Method_2_7C9F3E12F350460D(::MoleMole::MonoEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A3631421507AF3F6_METHOD_2_7C9F3E12F350460D_OFFSET))(this, a1);
	}
};
