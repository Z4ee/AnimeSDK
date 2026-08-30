#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace RPGTools { class MonoTimelineEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_GET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x160E9640)
#define CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x160E9660)
#define CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_METHOD_1_A55453DFDCADE7E5_OFFSET UNITYSDK_OFFSET(0x160E96B0)
#define CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_SET_FADEPROGRESS_OFFSET UNITYSDK_OFFSET(0x160E9650)
#define CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142__CTOR_OFFSET UNITYSDK_OFFSET(0x160E6610)

inline static constexpr unsigned int Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142_TypeDefinitionIndex = 60810;

class Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142 : public ::System::Object
{
public:
	::RPGTools::MonoTimelineEffect* ONCFMDAGDKE; // 0x10
	::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX IPMPNPPGHCP; // 0x18
	::System::Single _FadeProgress_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142__CTOR_OFFSET))(this);
	}

	::System::Single get_FadeProgress()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_GET_FADEPROGRESS_OFFSET))(this);
	}

	::System::Void set_FadeProgress(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_SET_FADEPROGRESS_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_A55453DFDCADE7E5(::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_CLASS_1_34F5F592BF79D142_METHOD_1_A55453DFDCADE7E5_OFFSET))(this, a1);
	}
};
