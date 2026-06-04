#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BDDD1938B68BBED8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x144E9930)
#define CLASS_2_BDDD1938B68BBED8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x144E9970)
#define CLASS_2_BDDD1938B68BBED8___C___GETDEFAULTCHALLENGEGROUP_B__7_0_OFFSET UNITYSDK_OFFSET(0x144E9980)

inline static constexpr unsigned int Class_2_BDDD1938B68BBED8___c_TypeDefinitionIndex = 49791;

class Class_2_BDDD1938B68BBED8___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BDDD1938B68BBED8___c_TypeDefinitionIndex)->GetStaticField(0x482B0);
	}
	static ::Class_2_BDDD1938B68BBED8___c** StaticGet___9()
	{
		return (::Class_2_BDDD1938B68BBED8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BDDD1938B68BBED8___c_TypeDefinitionIndex)->GetStaticField(0x482B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetDefaultChallengeGroup_b__7_0(::RPG::Client::ChallengeGroupData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8___C___GETDEFAULTCHALLENGEGROUP_B__7_0_OFFSET))(this, a1);
	}
};
