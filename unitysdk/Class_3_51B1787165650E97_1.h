#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_985CFBC4EEA564F8.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"

class Class_0_16E4307DCC419505_340;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_51B1787165650E97_1_METHOD_3_82F59E480EEE2029_OFFSET UNITYSDK_OFFSET(0x17543910)
#define CLASS_3_51B1787165650E97_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17543900)

inline static constexpr unsigned int Class_3_51B1787165650E97_1_TypeDefinitionIndex = 71328;

class Class_3_51B1787165650E97_1 : public ::Class_2_985CFBC4EEA564F8
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + CLASS_3_51B1787165650E97_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::GamePlayLockTarget Method_3_82F59E480EEE2029()
	{
		return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_51B1787165650E97_1_METHOD_3_82F59E480EEE2029_OFFSET))(this);
	}
};
