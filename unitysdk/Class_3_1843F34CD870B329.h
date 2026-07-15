#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class PlanetFesPlaySpinAnim; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1843F34CD870B329_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x14FD9EA0)
#define CLASS_3_1843F34CD870B329_METHOD_3_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x14FD95C0)
#define CLASS_3_1843F34CD870B329_METHOD_3_4AB6080268AE2E8F_OFFSET UNITYSDK_OFFSET(0x14FDA340)
#define CLASS_3_1843F34CD870B329_METHOD_3_4EED4B4A60EC4E72_OFFSET UNITYSDK_OFFSET(0x14FDA860)
#define CLASS_3_1843F34CD870B329_METHOD_3_6CFC539FC76B852D_OFFSET UNITYSDK_OFFSET(0x14FDA4A0)
#define CLASS_3_1843F34CD870B329_METHOD_3_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x14FD9C80)
#define CLASS_3_1843F34CD870B329_METHOD_3_BA8DA10955CBCD4F_OFFSET UNITYSDK_OFFSET(0x14FDA1B0)
#define CLASS_3_1843F34CD870B329_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14FD9460)
#define CLASS_3_1843F34CD870B329_TICK_OFFSET UNITYSDK_OFFSET(0x14FDA7F0)
#define CLASS_3_1843F34CD870B329__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD9410)

inline static constexpr unsigned int Class_3_1843F34CD870B329_TypeDefinitionIndex = 55678;

class Class_3_1843F34CD870B329 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::PlanetFesPlaySpinAnim*>
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x34
	::RPG::Client::TextID Field_3_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_458DAEAB6170C584_OFFSET))(this);
	}

	::RPG::GameCore::PlanetFesAnimComposite* Method_3_6CFC539FC76B852D(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
	{
		return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_6CFC539FC76B852D_OFFSET))(this, a1);
	}

	::System::Void Method_3_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_3_BA8DA10955CBCD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_BA8DA10955CBCD4F_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4EED4B4A60EC4E72()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_4EED4B4A60EC4E72_OFFSET))(this);
	}

	::System::Boolean Method_3_4AB6080268AE2E8F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1843F34CD870B329_METHOD_3_4AB6080268AE2E8F_OFFSET))(this, a1);
	}
};
