#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class RogueDLC1Dot3Teleport; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F52229D2AB39D682_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D34560)
#define CLASS_2_F52229D2AB39D682_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8D34660)
#define CLASS_2_F52229D2AB39D682_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D34C70)
#define CLASS_2_F52229D2AB39D682_METHOD_2_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0x8D34A00)
#define CLASS_2_F52229D2AB39D682_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8D34760)
#define CLASS_2_F52229D2AB39D682_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D348F0)
#define CLASS_2_F52229D2AB39D682_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8D34990)
#define CLASS_2_F52229D2AB39D682_TICK_OFFSET UNITYSDK_OFFSET(0x8D346A0)
#define CLASS_2_F52229D2AB39D682__CTOR_OFFSET UNITYSDK_OFFSET(0x8D34550)

inline static constexpr unsigned int Class_2_F52229D2AB39D682_TypeDefinitionIndex = 47161;

class Class_2_F52229D2AB39D682 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueDLC1Dot3Teleport* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3Teleport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3Teleport*))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_DFF4B66A65F23F6B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_METHOD_2_DFF4B66A65F23F6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F52229D2AB39D682_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
