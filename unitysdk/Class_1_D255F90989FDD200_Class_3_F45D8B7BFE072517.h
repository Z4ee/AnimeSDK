#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_E559374AC4E5AD13;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x190D95C0)
#define CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x190D95F0)
#define CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517_INVOKE_OFFSET UNITYSDK_OFFSET(0x190D7020)
#define CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517__CTOR_OFFSET UNITYSDK_OFFSET(0x190D94D0)

inline static constexpr unsigned int Class_1_D255F90989FDD200_Class_3_F45D8B7BFE072517_TypeDefinitionIndex = 35821;

class Class_1_D255F90989FDD200_Class_3_F45D8B7BFE072517 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_E559374AC4E5AD13* Invoke(::RPG::GameCore::CakeRaceActionBase* a1)
	{
		return ((::Class_1_E559374AC4E5AD13*(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceActionBase* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_E559374AC4E5AD13* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::Class_1_E559374AC4E5AD13*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_D255F90989FDD200_CLASS_3_F45D8B7BFE072517_ENDINVOKE_OFFSET))(this, a1);
	}
};
