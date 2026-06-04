#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_15951C7ACBFF8B93;
namespace RPG::Client { class AvatarOutfit; }

#define CLASS_1_269DB65BC39777F0_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0xA7F5E50)
#define CLASS_1_269DB65BC39777F0_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0xA7F5F40)
#define CLASS_1_269DB65BC39777F0_METHOD_1_9D44CA0820FE38B7_OFFSET UNITYSDK_OFFSET(0xA7F5FD0)
#define CLASS_1_269DB65BC39777F0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F5E60)

inline static constexpr unsigned int Class_1_269DB65BC39777F0_TypeDefinitionIndex = 58640;

class Class_1_269DB65BC39777F0 : public ::System::Object
{
public:
	::Class_1_15951C7ACBFF8B93* Field_1_0; // 0x10
	::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_269DB65BC39777F0__CTOR_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfit* get_Outfit()
	{
		return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_269DB65BC39777F0_GET_OUTFIT_OFFSET))(this);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_269DB65BC39777F0_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D44CA0820FE38B7(::Class_1_075C34D03AFA1215_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + CLASS_1_269DB65BC39777F0_METHOD_1_9D44CA0820FE38B7_OFFSET))(this, a1);
	}
};
