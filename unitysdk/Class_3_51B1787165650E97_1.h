#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B3566F804A22C208_9.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"

class Class_0_16E4307DCC419505_295;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_51B1787165650E97_1_METHOD_3_446196FA4D8C65AD_OFFSET UNITYSDK_OFFSET(0x10549930)
#define CLASS_3_51B1787165650E97_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10549920)

inline static constexpr unsigned int Class_3_51B1787165650E97_1_TypeDefinitionIndex = 61486;

class Class_3_51B1787165650E97_1 : public ::Class_2_B3566F804A22C208_9
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*))((::PBYTE)hIl2Cpp + CLASS_3_51B1787165650E97_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::GamePlayLockTarget Method_3_446196FA4D8C65AD()
	{
		return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51B1787165650E97_1_METHOD_3_446196FA4D8C65AD_OFFSET))(this);
	}
};
