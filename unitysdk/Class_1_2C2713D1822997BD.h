#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class VirtualCursor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_2C2713D1822997BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBDE690)
#define CLASS_1_2C2713D1822997BD_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBBDEC50)
#define CLASS_1_2C2713D1822997BD_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0xBBDF0B0)
#define CLASS_1_2C2713D1822997BD_METHOD_1_9018704AD7878B76_OFFSET UNITYSDK_OFFSET(0xBBDF160)
#define CLASS_1_2C2713D1822997BD_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0xBBDEF60)
#define CLASS_1_2C2713D1822997BD_METHOD_1_A08A44ED37F3CD80_OFFSET UNITYSDK_OFFSET(0xBBDECF0)
#define CLASS_1_2C2713D1822997BD_METHOD_1_A4D673DFC677991D_1_OFFSET UNITYSDK_OFFSET(0xBBDEB70)
#define CLASS_1_2C2713D1822997BD_METHOD_1_A4D673DFC677991D_2_OFFSET UNITYSDK_OFFSET(0xBBDEBE0)
#define CLASS_1_2C2713D1822997BD_METHOD_1_A4D673DFC677991D_OFFSET UNITYSDK_OFFSET(0xBBDEB00)
#define CLASS_1_2C2713D1822997BD_METHOD_1_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0xBBDED40)
#define CLASS_1_2C2713D1822997BD_METHOD_1_BE32FACBB0777226_OFFSET UNITYSDK_OFFSET(0xBBDE710)
#define CLASS_1_2C2713D1822997BD_METHOD_1_F47ECF5C6192F8FD_OFFSET UNITYSDK_OFFSET(0xBBDE880)
#define CLASS_1_2C2713D1822997BD_METHOD_1_F9DAB08EC8926B1B_OFFSET UNITYSDK_OFFSET(0xBBDE930)
#define CLASS_1_2C2713D1822997BD_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xBBDEF00)
#define CLASS_1_2C2713D1822997BD__CTOR_OFFSET UNITYSDK_OFFSET(0xBBDF220)

inline static constexpr unsigned int Class_1_2C2713D1822997BD_TypeDefinitionIndex = 77284;

class Class_1_2C2713D1822997BD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* DAAEFLHHLHD; // 0x10
	::UnityEngine::EventSystems::PointerEventData* CDGMGPEPAMO; // 0x18
	::UnityEngine::Vector3 FHMJONFDDBI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_BE32FACBB0777226()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_BE32FACBB0777226_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* Method_1_F47ECF5C6192F8FD()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_F47ECF5C6192F8FD_OFFSET))(this);
	}

	::System::Boolean Method_1_A4D673DFC677991D(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_A4D673DFC677991D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A4D673DFC677991D_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_A4D673DFC677991D_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A4D673DFC677991D_2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_A4D673DFC677991D_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F9DAB08EC8926B1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_F9DAB08EC8926B1B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9018704AD7878B76(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_9018704AD7878B76_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_ADA85C40A3382050_OFFSET))(this);
	}

	::RPG::Client::VirtualCursor* Method_1_A08A44ED37F3CD80()
	{
		return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_A08A44ED37F3CD80_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2713D1822997BD_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
