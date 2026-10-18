#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BezierProjectileData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_973CFCDB8EB8F7E6_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x126569D0)
#define CLASS_2_973CFCDB8EB8F7E6_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x126565C0)
#define CLASS_2_973CFCDB8EB8F7E6_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x12656930)
#define CLASS_2_973CFCDB8EB8F7E6_METHOD_2_93F83AD6F60CBFEA_OFFSET UNITYSDK_OFFSET(0x12655E20)
#define CLASS_2_973CFCDB8EB8F7E6_METHOD_2_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0x12655A30)
#define CLASS_2_973CFCDB8EB8F7E6_METHOD_2_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0x12656840)
#define CLASS_2_973CFCDB8EB8F7E6__CTOR_OFFSET UNITYSDK_OFFSET(0x12655980)

inline static constexpr unsigned int Class_2_973CFCDB8EB8F7E6_TypeDefinitionIndex = 54735;

class Class_2_973CFCDB8EB8F7E6 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BezierProjectileData* FPGPHIEOMFL; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KNJMEJLIEFF; // 0x50
	::UnityEngine::Vector3 EANKILEFHEA; // 0x58
	::UnityEngine::Vector3 AKEGBNBJKKM; // 0x64

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A678846DF98684D3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6_METHOD_2_A678846DF98684D3_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6_METHOD_2_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_93F83AD6F60CBFEA(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_973CFCDB8EB8F7E6_METHOD_2_93F83AD6F60CBFEA_OFFSET))(this, a1, a2, a3);
	}
};
