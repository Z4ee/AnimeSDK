#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ElectricChainV2 { class Shape; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_GET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x1AC5DCC0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_538FE3E275DA3359_OFFSET UNITYSDK_OFFSET(0x1AC5D8B0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_653EEB7EF259681D_OFFSET UNITYSDK_OFFSET(0x1AC5E160)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_762A9412773049BE_OFFSET UNITYSDK_OFFSET(0x1AC5E230)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_SET_LENGTHS_OFFSET UNITYSDK_OFFSET(0x1AC5E400)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5E410)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int PolyLine_TypeDefinitionIndex = 73494;

	class PolyLine : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElectricChainV2::Shape*>* polyPoints; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* _lengths; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_538FE3E275DA3359(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_538FE3E275DA3359_OFFSET))(this, a1);
		}

		::System::Single Method_2_653EEB7EF259681D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_653EEB7EF259681D_OFFSET))(this);
		}

		::System::Void Method_2_762A9412773049BE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_METHOD_2_762A9412773049BE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_lengths()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_GET_LENGTHS_OFFSET))(this);
		}

		::System::Void set_lengths(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_SET_LENGTHS_OFFSET))(this, a1);
		}
	};
}
