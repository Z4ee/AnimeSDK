#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3D4CDAF848DB014A;
class Class_2_37D832480CB327E1;
namespace RPG::Client { class MonoEscalatorConfigure; }
namespace RPG::Client { class PropInstanceManageMonoPlugin; }
namespace System { class String; }

#define CLASS_1_7D23A596E7A855DC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18929FB0)
#define CLASS_1_7D23A596E7A855DC_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1892A610)
#define CLASS_1_7D23A596E7A855DC_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1892A600)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1892A320)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1892A0D0)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1892A630)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1892A650)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x1892A440)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1892A090)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1892A040)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1892A660)
#define CLASS_1_7D23A596E7A855DC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1892A640)
#define CLASS_1_7D23A596E7A855DC__CTOR_OFFSET UNITYSDK_OFFSET(0x18929EC0)

inline static constexpr unsigned int Class_1_7D23A596E7A855DC_TypeDefinitionIndex = 57555;

class Class_1_7D23A596E7A855DC : public ::System::Object
{
public:
	::Class_1_3D4CDAF848DB014A* NFALPNEJCGP; // 0x10
	::Class_2_37D832480CB327E1* JHFKOHNKLMH; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* EJJJMLPECEJ; // 0x20
	::System::String* _UniqueName_k__BackingField; // 0x28
	::RPG::Client::MonoEscalatorConfigure* CEPGFGIOMDB; // 0x30
	::RPG::Client::PropInstanceManageMonoPlugin* DODAGCBJHIK; // 0x38
	::System::Boolean HKOPHLNFBIO; // 0x40
	::UnityEngine::Vector3 _Forward_k__BackingField; // 0x44
	::System::Single HPCHCEFOKJB; // 0x50
	::System::Single GHABAAOGBNO; // 0x54

	::System::Void _ctor(::System::String* a1, ::Class_2_37D832480CB327E1* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_37D832480CB327E1*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_92A998451FF61049(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_92A998451FF61049_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_GET_UNIQUENAME_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Forward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_GET_FORWARD_OFFSET))(this);
	}

	::Class_2_37D832480CB327E1* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_37D832480CB327E1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7D23A596E7A855DC_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
