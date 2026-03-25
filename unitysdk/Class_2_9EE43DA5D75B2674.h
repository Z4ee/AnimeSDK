#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/OpenWorldSimpleTriggerBatchBase_1.h"
#include "unitysdk/Struct_2_520121F0B7FF172F.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_9EE43DA5D75B2674_ISPOINTINSIDELOCAL_OFFSET UNITYSDK_OFFSET(0x8C53370)
#define CLASS_2_9EE43DA5D75B2674_METHOD_2_6CAAD1CD9A9913CA_1_OFFSET UNITYSDK_OFFSET(0x8C53720)
#define CLASS_2_9EE43DA5D75B2674_METHOD_2_6CAAD1CD9A9913CA_OFFSET UNITYSDK_OFFSET(0x8C53680)
#define CLASS_2_9EE43DA5D75B2674_METHOD_2_F9D7EC28C3CD48AF_OFFSET UNITYSDK_OFFSET(0x8C535C0)
#define CLASS_2_9EE43DA5D75B2674__CTOR_OFFSET UNITYSDK_OFFSET(0x8C537B0)

inline static constexpr unsigned int Class_2_9EE43DA5D75B2674_TypeDefinitionIndex = 60625;

class Class_2_9EE43DA5D75B2674 : public ::RPG::Client::OpenWorld::OpenWorldSimpleTriggerBatchBase_1<::Struct_2_520121F0B7FF172F>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EE43DA5D75B2674__CTOR_OFFSET))(this);
	}

	::System::Boolean IsPointInsideLocal(::UnityEngine::Vector3 a1, ::Struct_2_520121F0B7FF172F& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_520121F0B7FF172F&))((::PBYTE)hIl2Cpp + CLASS_2_9EE43DA5D75B2674_ISPOINTINSIDELOCAL_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_F9D7EC28C3CD48AF(::UnityEngine::Vector3 a1, ::Struct_2_520121F0B7FF172F& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::Struct_2_520121F0B7FF172F&))((::PBYTE)hIl2Cpp + CLASS_2_9EE43DA5D75B2674_METHOD_2_F9D7EC28C3CD48AF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_6CAAD1CD9A9913CA(::UnityEngine::Vector3 a1, ::Struct_2_520121F0B7FF172F& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::Struct_2_520121F0B7FF172F&))((::PBYTE)hIl2Cpp + CLASS_2_9EE43DA5D75B2674_METHOD_2_6CAAD1CD9A9913CA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_6CAAD1CD9A9913CA_1(::UnityEngine::Vector3 a1, ::Struct_2_520121F0B7FF172F& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::Struct_2_520121F0B7FF172F&))((::PBYTE)hIl2Cpp + CLASS_2_9EE43DA5D75B2674_METHOD_2_6CAAD1CD9A9913CA_1_OFFSET))(a1, a2);
	}
};
