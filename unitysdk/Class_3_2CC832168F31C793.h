#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/TarotBookPageType.h"

namespace RPG::Client { class TarotBookProcessContext; }
namespace RPG::GameCore { class ShowTarotBookPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2CC832168F31C793_METHOD_3_0B164D91F80F35F8_OFFSET UNITYSDK_OFFSET(0xB746A10)
#define CLASS_3_2CC832168F31C793_METHOD_3_732EDB3121B072B2_OFFSET UNITYSDK_OFFSET(0xB746750)
#define CLASS_3_2CC832168F31C793_METHOD_3_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0xB746ED0)
#define CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_1_OFFSET UNITYSDK_OFFSET(0xB746BD0)
#define CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_2_OFFSET UNITYSDK_OFFSET(0xB746CD0)
#define CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_3_OFFSET UNITYSDK_OFFSET(0xB746DD0)
#define CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_OFFSET UNITYSDK_OFFSET(0xB746AD0)
#define CLASS_3_2CC832168F31C793_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB746620)
#define CLASS_3_2CC832168F31C793__CTOR_OFFSET UNITYSDK_OFFSET(0xB746260)

inline static constexpr unsigned int Class_3_2CC832168F31C793_TypeDefinitionIndex = 53588;

class Class_3_2CC832168F31C793 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowTarotBookPage*>
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TarotBookPageType, ::System::Action*>* BMNNMNNJKBD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTarotBookPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTarotBookPage*))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_732EDB3121B072B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_732EDB3121B072B2_OFFSET))(this);
	}

	::System::Void Method_3_B03BD337C608E98D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_OFFSET))(this);
	}

	::System::Void Method_3_B03BD337C608E98D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_1_OFFSET))(this);
	}

	::System::Void Method_3_B03BD337C608E98D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_2_OFFSET))(this);
	}

	::System::Void Method_3_B03BD337C608E98D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_B03BD337C608E98D_3_OFFSET))(this);
	}

	::System::Void Method_3_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_9C844AB9164FA35A_OFFSET))(this);
	}

	::RPG::Client::TarotBookProcessContext* Method_3_0B164D91F80F35F8()
	{
		return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CC832168F31C793_METHOD_3_0B164D91F80F35F8_OFFSET))(this);
	}
};
