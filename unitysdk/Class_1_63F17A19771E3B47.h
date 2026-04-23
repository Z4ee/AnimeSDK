#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelEntityBakedInfo; }
namespace RPG::GameCore { class LevelGroupBakedInfo; }

#define CLASS_1_63F17A19771E3B47_METHOD_1_11FF63337863167D_OFFSET UNITYSDK_OFFSET(0x9244BE0)
#define CLASS_1_63F17A19771E3B47_METHOD_1_1734982C6227E4B8_OFFSET UNITYSDK_OFFSET(0x9245050)
#define CLASS_1_63F17A19771E3B47_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9244BA0)
#define CLASS_1_63F17A19771E3B47__CTOR_OFFSET UNITYSDK_OFFSET(0x9245160)

inline static constexpr unsigned int Class_1_63F17A19771E3B47_TypeDefinitionIndex = 49349;

class Class_1_63F17A19771E3B47 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63F17A19771E3B47__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63F17A19771E3B47_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_11FF63337863167D(::System::UInt32 a1, ::System::Int32 a2, ::RPG::GameCore::LevelGroupBakedInfo* a3, ::System::UInt32& a4, ::System::Int32& a5, ::System::UInt32& a6, ::System::UInt32& a7, ::Il2CppArray<::System::UInt32>*& a8)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::RPG::GameCore::LevelGroupBakedInfo*, ::System::UInt32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_63F17A19771E3B47_METHOD_1_11FF63337863167D_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Boolean Method_1_1734982C6227E4B8(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>* a2, ::System::UInt32& a3, ::System::Int32& a4, ::System::UInt32& a5, ::System::UInt32& a6, ::Il2CppArray<::System::UInt32>*& a7)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelEntityBakedInfo*>*, ::System::UInt32&, ::System::Int32&, ::System::UInt32&, ::System::UInt32&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_63F17A19771E3B47_METHOD_1_1734982C6227E4B8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
