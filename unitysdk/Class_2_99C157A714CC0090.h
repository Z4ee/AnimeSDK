#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowMuseumMarketPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_99C157A714CC0090_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DC3D90)
#define CLASS_2_99C157A714CC0090_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11DC3E20)
#define CLASS_2_99C157A714CC0090_METHOD_2_A088A6C0EFC42F07_OFFSET UNITYSDK_OFFSET(0x11DC3F70)
#define CLASS_2_99C157A714CC0090_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DC4070)
#define CLASS_2_99C157A714CC0090_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DC3DD0)
#define CLASS_2_99C157A714CC0090_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DC3EC0)
#define CLASS_2_99C157A714CC0090_TICK_OFFSET UNITYSDK_OFFSET(0x11DC3F10)
#define CLASS_2_99C157A714CC0090__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC3D80)

inline static constexpr unsigned int Class_2_99C157A714CC0090_TypeDefinitionIndex = 54090;

class Class_2_99C157A714CC0090 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::Client::LuaUIController* Field_2_2; // 0x20
	::RPG::GameCore::ShowMuseumMarketPage* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMuseumMarketPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMuseumMarketPage*))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A088A6C0EFC42F07(::RPG::Client::LuaUIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_METHOD_2_A088A6C0EFC42F07_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99C157A714CC0090_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
