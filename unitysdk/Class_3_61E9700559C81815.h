#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EE6E337F1B650C03.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A80764A8DE475761;

#define CLASS_3_61E9700559C81815_CLEAR_OFFSET UNITYSDK_OFFSET(0x17614E00)
#define CLASS_3_61E9700559C81815_METHOD_3_82961E8C2F5ECF1F_OFFSET UNITYSDK_OFFSET(0x17613030)
#define CLASS_3_61E9700559C81815_METHOD_3_8C53921E4F429D67_OFFSET UNITYSDK_OFFSET(0x17613C40)
#define CLASS_3_61E9700559C81815_METHOD_3_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0x17612DC0)
#define CLASS_3_61E9700559C81815_METHOD_3_962BD8C21EBFA00D_OFFSET UNITYSDK_OFFSET(0x17612B20)
#define CLASS_3_61E9700559C81815_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x17612AD0)
#define CLASS_3_61E9700559C81815__CTOR_OFFSET UNITYSDK_OFFSET(0x17614EC0)

inline static constexpr unsigned int Class_3_61E9700559C81815_TypeDefinitionIndex = 73097;

class Class_3_61E9700559C81815 : public ::Class_2_EE6E337F1B650C03
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_3_0; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_1; // 0x28
	::System::Int32 Field_3_2; // 0x30
	::System::Single Field_3_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_962BD8C21EBFA00D(::Class_1_A80764A8DE475761* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A80764A8DE475761*))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815_METHOD_3_962BD8C21EBFA00D_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815_METHOD_3_8D595942D57F40CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_82961E8C2F5ECF1F(::UnityEngine::Vector3& a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815_METHOD_3_82961E8C2F5ECF1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_8C53921E4F429D67(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815_METHOD_3_8C53921E4F429D67_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61E9700559C81815_CLEAR_OFFSET))(this);
	}
};
