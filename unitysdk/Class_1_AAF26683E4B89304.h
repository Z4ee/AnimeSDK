#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_507;
class Class_0_16E4307DCC419505_508;
class Class_0_16E4307DCC419505_542;
class Class_1_EFF03B82D1C2B1F6;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AAF26683E4B89304_METHOD_1_17ECA815846ACA03_OFFSET UNITYSDK_OFFSET(0x15B656C0)
#define CLASS_1_AAF26683E4B89304_METHOD_1_6D310BF07529E158_OFFSET UNITYSDK_OFFSET(0x15B65570)
#define CLASS_1_AAF26683E4B89304_METHOD_1_E55DFD7421058A86_OFFSET UNITYSDK_OFFSET(0x15B65600)
#define CLASS_1_AAF26683E4B89304_METHOD_1_E872DB93CE0C0B54_OFFSET UNITYSDK_OFFSET(0x15B651A0)
#define CLASS_1_AAF26683E4B89304__CTOR_OFFSET UNITYSDK_OFFSET(0x15B650F0)

inline static constexpr unsigned int Class_1_AAF26683E4B89304_TypeDefinitionIndex = 62735;

class Class_1_AAF26683E4B89304 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_542* PLOCCENMDOI; // 0x10
	::Class_0_16E4307DCC419505_506* LIOJKFIGGIJ; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_506* a1, ::Class_0_16E4307DCC419505_542* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_EFF03B82D1C2B1F6* Method_1_E872DB93CE0C0B54(::Proto::DisplayAvatarDetailInfo* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::Class_1_EFF03B82D1C2B1F6*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_E872DB93CE0C0B54_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_507*>>* Method_1_6D310BF07529E158(::Proto::DisplayAvatarDetailInfo* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_507*>>*(*)(::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_6D310BF07529E158_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_508* Method_1_E55DFD7421058A86(::Proto::DisplayAvatarDetailInfo* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::Class_0_16E4307DCC419505_508*(*)(::Proto::DisplayAvatarDetailInfo*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_E55DFD7421058A86_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>* Method_1_17ECA815846ACA03(::Proto::DisplayAvatarDetailInfo* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID, ::Proto::DisplayAvatarDetailInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304_METHOD_1_17ECA815846ACA03_OFFSET))(this, a1);
	}
};
