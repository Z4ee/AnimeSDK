#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools
{
	inline static constexpr unsigned int TaskVmInfo_TypeDefinitionIndex = 45152;

	struct alignas(8) TaskVmInfo
	{
		::System::UInt64 virtual_size; // 0x10
		::System::Int32 region_count; // 0x18
		::System::Int32 page_size; // 0x1C
		::System::UInt64 resident_size; // 0x20
		::System::UInt64 resident_size_peak; // 0x28
		::System::UInt64 device; // 0x30
		::System::UInt64 device_peak; // 0x38
		::System::UInt64 internal_mem; // 0x40
		::System::UInt64 internal_peak; // 0x48
		::System::UInt64 external; // 0x50
		::System::UInt64 external_peak; // 0x58
		::System::UInt64 reusable; // 0x60
		::System::UInt64 reusable_peak; // 0x68
		::System::UInt64 purgeable_volatile_pmap; // 0x70
		::System::UInt64 purgeable_volatile_resident; // 0x78
		::System::UInt64 purgeable_volatile_virtual; // 0x80
		::System::UInt64 compressed; // 0x88
		::System::UInt64 compressed_peak; // 0x90
		::System::UInt64 compressed_lifetime; // 0x98
		::System::UInt64 phys_footprint; // 0xA0
		::System::UInt64 min_address; // 0xA8
		::System::UInt64 max_address; // 0xB0
		::System::Int64 ledger_phys_footprint_peak; // 0xB8
		::System::Int64 ledger_purgeable_nonvolatile; // 0xC0
		::System::Int64 ledger_purgeable_nonvolatile_compressed; // 0xC8
		::System::Int64 ledger_purgeable_volatile; // 0xD0
		::System::Int64 ledger_purgeable_volatile_compressed; // 0xD8
		::System::Int64 ledger_tag_network_nonvolatile; // 0xE0
		::System::Int64 ledger_tag_network_nonvolatile_compressed; // 0xE8
		::System::Int64 ledger_tag_network_volatile; // 0xF0
		::System::Int64 ledger_tag_network_volatile_compressed; // 0xF8
		::System::Int64 ledger_tag_media_footprint; // 0x100
		::System::Int64 ledger_tag_media_footprint_compressed; // 0x108
		::System::Int64 ledger_tag_media_nofootprint; // 0x110
		::System::Int64 ledger_tag_media_nofootprint_compressed; // 0x118
		::System::Int64 ledger_tag_graphics_footprint; // 0x120
		::System::Int64 ledger_tag_graphics_footprint_compressed; // 0x128
		::System::Int64 ledger_tag_graphics_nofootprint; // 0x130
		::System::Int64 ledger_tag_graphics_nofootprint_compressed; // 0x138
		::System::Int64 ledger_tag_neural_footprint; // 0x140
		::System::Int64 ledger_tag_neural_footprint_compressed; // 0x148
		::System::Int64 ledger_tag_neural_nofootprint; // 0x150
		::System::Int64 ledger_tag_neural_nofootprint_compressed; // 0x158
		::System::UInt64 limit_bytes_remaining; // 0x160
		::System::Int32 decompressions; // 0x168
		::System::Int64 ledger_swapins; // 0x170
	};
}
