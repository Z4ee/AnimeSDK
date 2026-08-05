#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_38F9DB40B2A19D05_METHOD_1_1BEAC6D73D92884F_OFFSET UNITYSDK_OFFSET(0x11C80E10)
#define CLASS_1_38F9DB40B2A19D05_METHOD_1_3F7D463AC4EB5F99_OFFSET UNITYSDK_OFFSET(0x11C80F40)
#define CLASS_1_38F9DB40B2A19D05_METHOD_1_D41176A036B6B7F5_OFFSET UNITYSDK_OFFSET(0x11C81130)
#define CLASS_1_38F9DB40B2A19D05_METHOD_1_F599575847D74A1A_OFFSET UNITYSDK_OFFSET(0x11C811B0)
#define CLASS_1_38F9DB40B2A19D05__CTOR_OFFSET UNITYSDK_OFFSET(0x11C811A0)

inline static constexpr unsigned int Class_1_38F9DB40B2A19D05_TypeDefinitionIndex = 68079;

class Class_1_38F9DB40B2A19D05 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38F9DB40B2A19D05__CTOR_OFFSET))(this);
	}

	::Struct_2_C8DD384065D32AEE Method_1_1BEAC6D73D92884F(::UnityEngine::Vector2 a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_38F9DB40B2A19D05_METHOD_1_1BEAC6D73D92884F_OFFSET))(this, a1);
	}

	::Struct_2_C8DD384065D32AEE Method_1_3F7D463AC4EB5F99(::System::Object* a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_38F9DB40B2A19D05_METHOD_1_3F7D463AC4EB5F99_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D41176A036B6B7F5(::Struct_2_C8DD384065D32AEE& a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C8DD384065D32AEE&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_38F9DB40B2A19D05_METHOD_1_D41176A036B6B7F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F599575847D74A1A(::Struct_2_C8DD384065D32AEE& a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C8DD384065D32AEE&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_38F9DB40B2A19D05_METHOD_1_F599575847D74A1A_OFFSET))(this, a1, a2);
	}
};
